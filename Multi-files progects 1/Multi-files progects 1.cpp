////Создайте многофайловый проект на C++, который содержит 
////основной файл main.cpp и дополнительный файл с функциями
////utilities.cpp.Функции из utilities.cpp должны выполнять
////различные математические операции, такие как сложение, 
////вычитание, умножение и деление.

#include <iostream>
#include "Sum.h"
#include "MyClass.h"

int main() {
	setlocale(LC_ALL, "rus");

	
	std::cout << Sum(3, 6) << std::endl;
	MyNamespace::MyClass m;//Подключаем класс к нашему собственному пространству имен
	//m.printMassage("иии");



	return 0;
}