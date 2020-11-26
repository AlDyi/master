#!/usr/local/bin/bash

D=$(date  +%d-%B-%Y)
T=$(date +%H:%M:%S)
I=$(whoami)
PSI=$(ps -fu $I)
PS=$(ps -eF)
DF=$(df -h)
FR=$(free -m | grep 'Память' | awk '{print $3}')
DTW=$(uptime -s)

while :
do
	echo -e "\e[1;45;30mВведите номер выбранного пункта\e[0m"
	echo -e "\e[1;45;30m1 \e[0m" "\e[45;30mТекущий пользователь\e[0m"
	echo -e "\e[1;45;30m2 \e[0m" "\e[45;30mОбъем используемой памяти\e[0m"
	echo -e "\e[1;45;30m3 \e[0m" "\e[45;30mОбъем дискового пространства\e[0m"
	echo -e "\e[1;45;30m4 \e[0m" "\e[45;30mСписок запущенных процессов\e[0m"
	echo -e "\e[1;45;30m5 \e[0m" "\e[45;30mСписок процессов, запущенных текущим пользователем\e[0m"
	echo -e "\e[1;45;30m6 \e[0m" "\e[45;30mСистемные дата и время\e[0m"
	echo -e "\e[1;45;30m7 \e[0m" "\e[45;30mВремя запуска системы\e[0m"
	echo -e "\e[1;45;30m8 \e[0m" "\e[45;30mВыход\e[0m\n"
	read number
	case "$number" in
        	[1] ) echo -e "\e[1;43;30m$I\e[0m\n";;
		[2] ) echo -e "\e[1;43;30mОбъем используемой памяти\e[0m" "\e[1;43;30m$FR\e[0m" "\e[1;43;30mмб\e[0m\n";;
		[3] ) echo -e "$DF\n";;
		[4] ) echo -e "$PS\n";;
		[5] ) echo -e "$PSI\n";;
		[6] ) echo -e "\e[1;43;30m$D\e[0m" "\e[1;43;30m$T\e[0m\n";;
		[7] ) echo -e "\e[1;43;30mВремя запуска системы\e[0m" "\e[1;43;30m$DTW\e[0m\n";;
		[8] ) exit 0;;
	esac
done
