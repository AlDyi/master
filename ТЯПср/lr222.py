mystring = 'Ф;И;О;Возраст;Категория; Иванов;Иван;Иванович;23 года;Студент 3 курса; Петров;Семен;Игоревич;22 года;Студент 2 курса'
mystring = mystring.split('; ')
for i in range(0, len(mystring)):
    str1 = mystring[i]
    str1 = str1.split(';')
    print(str1[0] + ' ' + str1[1] + ' ' + str1[2] + '\t' + str1[4] + '\t\t' + str1[3])
