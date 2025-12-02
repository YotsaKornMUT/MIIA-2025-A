// LAB03.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
  {
	int a, b;
	printf("Enter A: ");
	scanf("%d", &a);

	printf("Enter B: ");
	scanf("%d", &b);

	printf("A + B = %d\n", a + b);
	printf("A - B = %d\n", a - b);
	printf("A * B = %d\n", a * b);
	printf("A / B = %d\n", a / b); // หารจ านวนเต็ม
	printf("A %% B = %d\n", a % b); // %% เพื่อพิมพ์เครื่องหมาย %

	return 0;
  }

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
