// TemplateClass2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "SmartArray.h"
#include <string>
using std::cout;
using std::endl;
int main()
{
    SmartArray<double> a(5);
    a.Show_Array();
}
