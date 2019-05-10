import sys
import numpy as np
import matplotlib.pyplot as plt

def get_data(filename):
  lines = open(filename, 'r').readlines()

  w = []
  w2 = []
  w3 = []
  w4 = []

  for line in lines:
    tokens = line.split()
    print(tokens)
    #w.append( [float(i) for i in tokens] )
    w.append( float(tokens[0]) )
    w2.append( float(tokens[1]) )
    w3.append( float(tokens[2]) )
    w4.append( float(tokens[3]) )

  return w, w2, w3, w4

def plot_weigths(w,w2,w3,w4):


  #for w in ws:
  plt.plot(w)
  plt.plot(w2)
  plt.plot(w3)
  plt.plot(w4)

  plt.show()

if __name__ == "__main__":

  filename = sys.argv[1]

  w, w2, w3, w4 = get_data(filename)

  plot_weigths(w,w2,w3,w4)

