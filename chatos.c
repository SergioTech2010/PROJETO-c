
#include <stdio.h>

int main()
{
    int numeros[10], soma = 0, contador = 0, i = 0, opcao;
    while (i < 10)
    {
        printf("Fala 10 números negativos\n");
        printf("Introduza um numero: ");
        scanf_s("%d", &numeros[i]);
     
        i++;
    }

    printf("\nO que queres calcular?\n");
    printf("1 - Quantidade de numeros negativos\n");
    printf("2 - Soma dos numeros negativos\n");
    printf("Opcao: ");
    scanf_s("%d", &opcao);

    if (opcao == 1)
    {
        i = 0;

        while (i < 10)
        {
            if (numeros[i] < 0)
            {
                contador++;
            }

            i++;
        }

        printf("Existem %d numeros negativos.\n", contador);
    }
    else if (opcao == 2)
    {
        i = 0;

        while (i < 10)
        {
            if (numeros[i] < 0)
            {
                soma = soma + numeros[i];
            }

            i++;
        }

        printf("A soma dos numeros negativos e: %d\n", soma);
    }
    else
    {
        printf("Opcao invalida!\n");
    }

    return 0;
}
