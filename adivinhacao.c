#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // imprime cabeçalho do nosso jogo
    // animacao feita com ASCII ART
    printf("          P  /_\\  P                              \n");
    printf("         /_\\_|_|_/_\\                            \n");
    printf("     n_n | ||. .|| | n_n         Bem vindo ao     \n");
    printf("     |_|_|nnnn nnnn|_|_|     Jogo de Adivinhacao! \n");
    printf("    |" "  |  |_|  |"  " |                         \n");
    printf("    |_____| ' _ ' |_____|                         \n");
    printf("          \\__|_|__/                              \n\n");
    printf("******************************************\n");
    printf("      Chute um numero entre 0 - 99\n");
    printf("******************************************\n\n");

    int segundos = time(0);
    srand(segundos);

    // a função rand() randomiza numeros aleatorios
    int numerogrande = rand();

    int numerosecreto = numerogrande % 100;
    int chute;
    int tentativas = 1;
    double pontos = 1000;
    int acertou = 0;

    // escolha de nivel de dificuldade do jogo, a quantidade de tentativas e compativel
    int nivel;
    printf("Em qual o nivel de dificuldade deseja jogar?\n");
    printf("(1) Facil, (2) Medio, (3) Dificil\n\n");
    printf("Escolha: ");
    scanf("%d", &nivel);

    int numerodetentativas;
    switch (nivel)
    {
    case 1:
        numerodetentativas = 20;
        break;
    case 2:
        numerodetentativas = 15;
        break;
    default:
        numerodetentativas = 6;
        break;
    }

    for(int i=1; i <= numerodetentativas; i++){

        printf("\n----------------------------------------");
        printf("\nTENTATIVA NUMERO %d\n\n", tentativas);
        printf("\nQual e o seu chute? ");
        scanf("%d", &chute);
        printf("\nSeu chute foi %d\n", chute);
        // se chutarem numero negativo:
        if (chute < 0){
            printf("Voce nao pode chutar numeros negativos!");
            printf("\nTente novamente\n");

            continue;
        }

        // comparação dos números
        acertou = (chute == numerosecreto);
        int maior = chute > numerosecreto;

        // quente ou frio: o numero chutado esta proximo ou longe do numero aleatorio sorteado pela maquina
        if(acertou){
            break;
        } 
        else if (maior) {
            printf("\nSeu chute foi MAIOR que o numero secreto\n");
        }
        else {
            printf("\nSeu chute foi MENOR que o numero secreto\n");
        }
        tentativas++;

        // abs + <stdlib.h> transformam numero negativo em positivo
        double pontosperdidos = abs(chute - numerosecreto)/(double)2;
        pontos = pontos - pontosperdidos;
    
    } 
    printf("\nFim de Jogo\n"); 
    printf("\n----------------------------------------");
    if (acertou){
        printf("\nYAAAY! VOCE GANHOU!\n\n");
        printf("Voce acertou em %d tentativas\n\n", tentativas);
        printf("Total de pontos: %.2f\n", pontos);
    } else{
        printf("\nVoce perdeu! Tente novamente\n");
    }
    

}