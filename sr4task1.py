N=int(input("Введите количество элементов массива: "))
A=[0]*N
from random import uniform
for i in range (0,N):
    A[i]=uniform(1,99)
print ("Входной массив: ",A)
for i in range (N):
    if A[i]==max(A):
        for i in range (i+1,N):
            A[i]=0
print ("Результат: ",A)