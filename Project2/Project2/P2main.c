#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


int main()
{
	printf("Pokusaj upisa u datoteku:\n\n\n");
	FILE *p;
	if (p = fopen("test.txt", "w"))
	{
		fprintf(p, "Kako je?");
		printf("Uspjesno :D.\n\n\n");
	}
	else printf("Neuspjesno :(.\n\n\n");
	printf("Dodao sam i ovo!\n");
	printf("USPJESNO KOMITOVANO!!!!!!!");
	system("pause");
	return 0;
}