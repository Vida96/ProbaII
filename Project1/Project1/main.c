#include<stdio.h>

int sum(int a, int b)
{
	return a + b;
}

int main()
{
	printf("Sume oblika (i+2)+(2i+1):\ni=(0,9)\n");
	for (int i = 0; i < 10; i++)
		printf("%d \n", sum(i + 2, 2 * i + 1));
	system("pause");
	return 0;
}