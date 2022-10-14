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
C=[]
for A[i] in A:
    for B[j] in B:
        if A[i]==B[j]:
            if A[i] not in C:
                C.append(A[i])
print ("Полученный массив:", C)
