# Цель выполнения всех этапов сборки
setup: preprocess compile asm listing run
	@echo "Сборка выполнена"
# Препроцессинг
preprocess:
	g++ -E pr1.cpp -o pr1.ii
	@echo "Препроцессинг выполнен"
# Компиляция
compile:
	g++ -S pr1.ii -o pr1.s
	@echo "Компиляция выполнена"
# Ассемблирование
asm:
	@g++ -c pr1.s -o pr1.o
	@echo "Ассемблирование выполнено"
# Линковка
listing:
	g++ pr1.o -o pr1
	@echo "Линковка выполнена"
# Запуск программы
run:
	./pr1
