#Вывод данных студента
name,surname,yearofbirth= input("Введите имя: "), input("Введите фамилию: "), (input ("Введите год рождения: "))
student= name + "_" + surname + "_" + yearofbirth #первый вывод
print(student)
name,surname=surname,name
yearofbirth=int(yearofbirth)
yearofbirth+=60
yearofbirth=str(yearofbirth)
studentchanged= name + "_" + surname + "_" + yearofbirth #второй вывод после смены местами имени и фамилии, изменении года
print(studentchanged)