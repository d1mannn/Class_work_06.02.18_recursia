#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
#include <iostream>
#include "Header.h"

using namespace std;

void main()
{
	/*11.	�������� ����������� ������� :
	a.���������� ����� ���� ������������ �����;
	b.���������� ���������� ���� ������������ �����.*/

	char m[5];
	int sum = 0;
	arrFilling(m, 5);
	Rsum(m, 5, &sum);
}
