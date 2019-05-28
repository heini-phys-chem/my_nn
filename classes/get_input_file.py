import sys
import numpy as np

def get_data(filename):
  lines = open(filename, 'r').readlines()

  inputData = []
  outputData = []

  for line in lines:
    tokens = line.split(',')
    inputData.append([str(i) for i in tokens[:-1]])
    outputData.append(float((tokens[-1])))

  return inputData, np.array(outputData)

if __name__ == "__main__":

  filename = sys.argv[1]

  inputData, outputData = get_data(filename)

  sone_scheiss = max(outputData)
  print(max(outputData))
  exit()
  outputData /= max(outputData)

  print("topology: 27 4 1")
  for i, dataIn in enumerate(inputData):
    print("in: " + dataIn[0] + " " +dataIn[1] + " " +dataIn[2] + " " +dataIn[3] + " " +dataIn[4] + " " +dataIn[5] + " " +dataIn[6] + " " +dataIn[7] + " " +dataIn[8] + " "+ dataIn[9] + " "+ dataIn[10] + " " +dataIn[11] + " " +dataIn[12] + " " +dataIn[13] + " "+ dataIn[14] + " " +dataIn[15] + " " +dataIn[16] + " "+ dataIn[17] + " " +dataIn[18] + " " +dataIn[19] + " " +dataIn[20] + " " +dataIn[21] + " "+ dataIn[22] + " "+ dataIn[23] + " "+ dataIn[24] + " " +dataIn[25] + " " +dataIn[26] )
    print("out: " + str(outputData[i]))


  print(str(sone_scheiss))
