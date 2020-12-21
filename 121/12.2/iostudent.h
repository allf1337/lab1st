/***************************************************************
 *                                                             *
 * Файл     : iostudent.h                                      *
 *                                                             *
 * Описание : заголовочный файл, описывающий функции           *
 *            для организации потокового ввода-вывода          *
 *            переменных структурных типов данных              *
 *            STUDENT (Студент) и GROUP (Группа)               *
 *                                                             *
 ***************************************************************/

#ifndef IOSTUDENT_H
#define IOSTUDENT_H

#include <iostream>
#include "students.h"
#include <fstream>

using namespace std;



istream& operator >> (istream &in, STUDENT & Student);

// Вывод информации о студенте в выходной поток
ostream& operator << (ostream &out, STUDENT Student);

// Ввод информации о группе из входного потока
istream& operator >> (istream &in, GROUP &Group);

// Вывод информации о группе в выходной поток
ostream& operator << (ostream &out, GROUP Group);



#endif

// =============== конец заголовочного файла  ==================
