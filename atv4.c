#include <stdio.h>

int main()
{
    int num=1;
    int soma = (num++);
    printf("%d", soma);

    while(num<=100)
    {
        soma += num;
        num++;
    }
    printf("A soma de todos os numeros de 1 a 100 e: %d\n", soma);

    return 0;
}