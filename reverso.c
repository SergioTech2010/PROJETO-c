#include<stdio.h>
#include<locale.h>
int main(void)
{
	setlocale(LC_ALL, "");
	char* nomes[5] = { "Marcos", "Tiago", "Marcos", "Ana", "Rodrigo" };
	int i;
	for (i = 4; i>= 0; i--)
	{
		printf("%s - ", nomes[i]);
	}


	return 0;
}