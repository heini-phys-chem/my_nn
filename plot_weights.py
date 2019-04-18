import sys
import numpy as np
import matplotlib.pyplot as plt

def get_data(filename):
  lines = open(filename, 'r').readlines()

  w1, w2, w3, w4 = [ [] for i in range(4) ]

  for line in lines:
    tokens = line.split()
    w1.append( float(tokens[0]) )
    w2.append( float(tokens[1]) )
    w3.append( float(tokens[2]) )
    w4.append( float(tokens[3]) )

  return w1, w2, w3, w4

def plot_weigths(w1, w2, w3, w4):
  labels = ['w1', 'w2', 'w3', 'w4']
  plt.plot(w1, color='b')
  plt.plot(w2, color='k')
  plt.plot(w3, color='r')
  plt.plot(w4, color='g')

  plt.legend(labels, loc='upper right')

  plt.show()

if __name__ == "__main__":

  filename = sys.argv[1]

  w1, w2, w3, w4 = get_data(filename)

  plot_weigths(w1, w2, w3, w4)

