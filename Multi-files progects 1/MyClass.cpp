#include "MyClass.h"



//Для того чтобы в одном проекте использовать несколько классов с одним и также именем
//Создадим собственное пространство имен и оборачиваем им наш класс и его реализацию
namespace MyNamespace {
	void MyClass::printMassage(char str[])
	{
		std::cout << str << std::endl;
	}

}
