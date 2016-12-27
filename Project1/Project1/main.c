#include<stdio.h>

int sum(int a, int b)
{
	return a + b;
}

int diff(int a, int b)
{
	return a - b;
}
int main()
{
	printf("Sume oblika (i+2)+(2i+1) i razlike oblika (3i+3)-(2i-2):\ni=(0,9)\n");
	for (int i = 0; i < 10; i++)
		printf("Suma:%d Razlika:%d\n", sum(sum(i, 2), sum(2 * i, 1)), diff(sum(3 * i, 3), diff(2 * i, 2)));
	
	printf("Izmjena uspjesno izvrsena");
	system("pause");
	return 0;
}