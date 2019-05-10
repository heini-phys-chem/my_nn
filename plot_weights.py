import sys
import numpy as np
import matplotlib.pyplot as plt

def get_data(filename):
  lines = open(filename, 'r').readlines()

  w = []

  for line in lines:
    tokens = line.split()
    print(tokens)
    w.append( [float(i) for i in tokens] )

  return w

def plot_weigths(ws):


  for w in ws:
    plt.plot(w)

  plt.show()

if __name__ == "__main__":

  filename = sys.argv[1]

  ws = get_data(filename)

  plot_weigths(ws)

