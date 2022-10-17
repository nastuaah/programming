N=int(input("Введите количество элементов массива: "))
A=[0]*N
from random import uniform
for i in range (0,N):
    A[i]=uniform(1,99)
print ("Входной массив: ",A)
def elements(B):
    B=A
    for j in range (len(B)):
        if B[j]==max(B):
            for j in range (j+1,len(B)):
                B[j]=0
    return (B)
print("Полученный массив: ", elements(A))






