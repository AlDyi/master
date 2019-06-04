n = int(input('Введите длину списка: '))
mas = []
count = 0
for i in range(0, n):
    mas.append(int(input('Введите ' + str(i) + ' элемент списка: ')))
print(mas)
del mas[0]
del mas[0]
for i in range(2):
    mas.append(int(input('Введите новый элемент: ')))
print(mas)