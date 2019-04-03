str = 'Компьютер Кот Процессор Мышка Кий Гора Вариант '
str = str.split(' ')
for i in range(0, len(str) - 1):
    if len(str[i]) > 5:
        print(str[i])
