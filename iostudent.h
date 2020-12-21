/***************************************************************
 *                                                             *
 * ����     : iostudent.h                                      *
 *                                                             *
 * �������� : ������������ ����, ����������� �������           *
 *            ��� ����������� ���������� �����-������          *
 *            ���������� ����������� ����� ������              *
 *            STUDENT (�������) � GROUP (������)               *
 *                                                             *
 ***************************************************************/

#ifndef IOSTUDENT_H
#define IOSTUDENT_H

#include <iostream>
#include "students.h"
#include <fstream>

using namespace std;



istream& operator >> (istream &in, STUDENT & Student);

// ����� ���������� � �������� � �������� �����
ostream& operator << (ostream &out, STUDENT Student);

// ���� ���������� � ������ �� �������� ������
istream& operator >> (istream &in, GROUP &Group);

// ����� ���������� � ������ � �������� �����
ostream& operator << (ostream &out, GROUP Group);



#endif

// =============== ����� ������������� �����  ==================