#include <stdio.h>

int main(){
    int x, y, mult;
    printf("*******CALCULADORA******");
    printf("\nDigite o primeiro numero: ");
    scanf("%d", &x);
    printf("\nDigite o segundo numero: ");
    scanf("%d", &y);
    mult = x*y;
    printf("\n\nO resultado da multiplicacao de %d e %d e igual a %d", x,y,mult);
}