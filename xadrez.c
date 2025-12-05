#include <stdio.h>

int main() {
int peça,movimento = 0;

// primeiro darei a opção de esolha da peça ao usuario
printf("Escolha  uma peça\n");
scanf("%d",&peça);

switch(peça){
// codigo referente a mocimentação da torre
    case 1:
    printf("Você escolheu a torre\n");
    while (movimento == 0)
    {
        printf("torre andou para a direita\n");
        movimento ++;
    }
    break;

// codigo referente a movimentação do bispo
    case 2:
    printf("Você escolheu o bispo\n");
    do {printf("bispo ando para cima,direita\n");
    }while(movimento == 0);
    break;

    default:
    printf("você escolheu a rainha\n");
    break;
}
printf("\n");

    return 0;
}
