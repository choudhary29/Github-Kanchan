#vectorization method
import numpy as np
A = [[1,2,3],
    [4,5,6],
    [7,8,9]]

B = [[1,2,3,4],
    [5,6,7,8],
    [2,4,6,8]]

result = [[0,0,0,0],
         [0,0,0,0],
         [0,0,0,0]]

result = np.dot(A, B)

print('Multiplied Matrix:')
for r in result:
    print(r)
