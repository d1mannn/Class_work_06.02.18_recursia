#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
#include <iostream>
#include "Header.h"

using namespace std;

int sum(char * m, int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += (int)*m;
		m++;
	}
	return sum;
}

int Rsum(char *m, int n, int *sum)
{
	if (n >= 0)
	{	
		n--;
		sum += Rsum(m + n, n, sum);
		
	}
	else
		n = *m + n;
	return n;
}

void arrFilling(char *m, int n)
{	
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		*m = (1 + rand() % 9) + '0';
		m++;
	}
}