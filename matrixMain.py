# main class for testing matrix class

import matrix

matrix1 = matrix.matrix()
print("Matrix 1:")
print(matrix1)
matrix2 = matrix.matrix()
print("Matrix 2:")
print(matrix2)

if(matrix1 == matrix2):
    print("The matrixes match")
else:
    print("the matrixes do not match")

matrix3 = matrix1*matrix2
print(matrix3)