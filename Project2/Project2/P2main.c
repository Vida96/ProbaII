#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


int main()
{
	printf("Pokusaj upisa u datoteku:\n");
	FILE *p;
	if (p = fopen("test.txt", "w"))
	{
		fprintf(p, "Kako je?");
		printf("Uspjesno :D.\n");
	}
	else printf("Neuspjesno :(.\n");
	system("pause");
	return 0;
}