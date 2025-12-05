#include <stdio.h>

int main() {
int peça,movimento = 0;

// primeiro darei a opção de esolha da peça ao usuario
printf("Escolha  uma peça\n");
scanf("%d",&peça);

switch(peça){
// codigo referente a movimentação da torre
    case 1:
    printf("Você escolheu a torre\n");
    while (movimento <= 5)
    {
        printf("torre andou para a direita\n");
        movimento ++;
    }
    break;

// codigo referente a movimentação do bispo
    case 2:
    printf("Você escolheu o bispo\n");
    do {printf("bispo ando para cima,direita\n");
        movimento ++;
    }while(movimento <=5);
    break;

    //// codigo referente a movimentação da rainha
    default:
    printf("você escolheu a rainha\n");
    for(movimento = 0;movimento <= 8;movimento ++)
    {printf("rainha andou 8 casas para a esquerda\n");}
    break;
}
printf("\n");

    return 0;
}
