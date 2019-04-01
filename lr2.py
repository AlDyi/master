import random

Chislo = random.randint(0, 100)
pol = int(input('Введите число от 0 до 100 = '))
while Chislo != pol:
    if pol > Chislo:
        print('Введите число меньше')
        pol = int(input('Введите число от 0 до 100 = '))
    else:
            print('Введите число больше')
            pol = int(input('Введите число от 0 до 100 = '))
if Chislo == pol:
    print('Вы угадали число')
