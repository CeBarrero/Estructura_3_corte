# -*- coding: utf-8 -*-
'''
Created on 22 nov. 2017

@author: CesarBarre
'''
import random

matrix = []

filas = int(input("Tamano de la matriz: \n"))
columnas = filas

for fil in range(0,filas):
    matrix.append([0]*columnas)

for fil in range(0,filas):
    for col in range(0,filas):
        matrix[fil][col] = random.randint(1,9)
    print()

for fil in matrix:
    for col in fil:
        print(col,end = " ")
    print("")
print()

mt = (filas // 2)

if filas % 2 != 0:

    for fil in range(0,filas):
        for col in range(0,filas):
            if (fil + col >= (mt) and fil + (mt) >= col and col + (mt) >= fil and fil + col <= (mt) + filas-1):
                print(matrix[fil][col],end = " ")
            else:
                matrix[fil][col] = " "
                print(matrix[fil][col],end = " ")
        print("")
else:
    for fil in range(0,filas):
        for col in range(0,filas):
            if (fil + col >= (mt) -1 and fil + (mt) >= col and col + (mt) >= fil and fil + col <= (mt) + filas-1):
                print(matrix[fil][col],end = " ")
            else:
                matrix[fil][col] = " "
                print(matrix[fil][col],end = " ")
        print("")