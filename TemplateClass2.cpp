// TemplateClass2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "SmartArray.h"
#include <string>
using std::cout;
using std::endl;
int main()
{
    SmartArray<double, 9> a;
    a.Show_Array();
}
