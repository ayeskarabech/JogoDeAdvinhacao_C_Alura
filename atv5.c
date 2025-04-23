#include <stdio.h>

int main() {
    int num;
    int i = 1;

    printf("**** TABUADA ****\n\n");
    printf("Digite um numero: ");
    scanf("%d", &num);

    while (i <= 10) {
        printf("%d x %d = %d\n", num, i, num * i);
        i++;
    }

    // prof fez com FOR, segue:
    // declarou a variavel já no for()
    // for(int i = 0; i <= 10; i++) {
    //     int multiplicacao = numero * i;
    //     printf("%d x %d = %d\n", numero, i, multiplicacao);
    //    }
    return 0;
}