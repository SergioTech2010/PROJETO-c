#include<stdio.h>
#include<locale.h>
int main(void)
{
	setlocale(LC_ALL, "");
	char temp;
	float valor;
	printf("Queres calcular de C para F ou ao contrário?(C/F)");
	scanf_s("%c", &temp);
	printf("Diz a temperatura");
	scanf_s("%f", &valor);
	if (temp == "C" || temp == "C")
		printf("A temperatura em F é: %.1f",(valor * 9/ 5) + 32);
	else
		printf("A temperatura em Celcius é: %.1f",(valor - 32)*5/9);

	return 0;
}