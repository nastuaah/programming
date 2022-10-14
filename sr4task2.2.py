N=int(input("Введите количество элементов массива A: "))
A=[0]*N
from random import randint
for i in range (0,N):
    A[i]=randint(1,99)
print (A)
K=int(input("Введите количество элементов массива B: "))
B=[0]*K
from random import randint
for j in range (0,K):
    B[j]=randint(1,99)
print (B)
for i in range (N):
    for j in range (K):
        if A[i]==B[j]:
            print (A[i])