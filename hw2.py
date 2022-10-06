#Нахождение площади и периметра треугольника
#a,b-катеты,с-гипотенуза,P-периметр,p-полупериметр,s-площадь прямоугольного, s1 - площадь обычного треугольника
print ("Введите стороны треугольника:")
kat1,kat2,gip=float(input("kat1=")),float(input("kat2=")),float(input("gip="))
Perimetr=kat1+kat2+gip #находим периметр
poluperimetr=Perimetr/2
square=(kat1+kat2)/2 #находим площадь, тк треугольник прямоугольный
if gip**2!=kat1**2+kat2**2: #проверка, если введены числа, неудовлетворяющие прямоугольному трегольнику
    from math import sqrt
    square1=sqrt(poluperimetr*(poluperimetr-kat1)*(poluperimetr-kat2)*(poluperimetr-gip))
    print ("error","Площадь треугольника:",square1,"Периметр треугольника:",Perimetr, sep="\n") 
else: print("Площадь треугольника:",square,"Периметр треугольника:",Perimetr, sep="\n")