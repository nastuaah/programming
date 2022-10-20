#Перевод в двоичную и восьмеричную систему с 8-ми битной разрядностью
number=int(input("Введите число: "))
numbersystem=int(input("Введите целевую систему счисления: "))
if number<0 or number>255:
    print ("Введено число, которое не может быть переведено с 8-ми битной разрядностью")
else:
    def perevod(a,numbersystem):
        result=''
        while a>0:
            result=str(a%numbersystem)+result
            a=a//numbersystem
        while len(result)!=8: #проверка на 8-ми битный код
            result='0'+result
        return result
    print (perevod(number,numbersystem))
        