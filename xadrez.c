#include <stdio.h>

//recursiva referente a torre
void movertorre(int casas){
    if(casas > 0){
        printf("Direita\n");
        movertorre(casas -1);
    }
    }

//recursiva com repetição aninhada referente ao bispo
void moverbispo(int casas){
    for(casas; casas > 0;casas -- )
    {int casas2 = 1;
        for (casas2; casas2 >0;casas2 --)
        {
            printf("Cima\n");
        }
        printf("Direita\n");
    }
}

// recursiva referente a rainha
void moverrainha(int casas){
if(casas > 0){
printf("esquerda\n");
 moverrainha(casas -1);
}
}

int main() {
int peça, movimento=5, casas = 5;

// primeiro darei a opção de esolha da peça ao usuario
printf("Escolha  uma peça\n");
scanf("%d",&peça);

switch(peça){
// codigo referente a movimentação da torre
    case 1:
    printf("Você escolheu a torre\n");
     printf("\n");
    movertorre(casas);
    break;

// codigo referente a movimentação do bispo
    case 2:
    printf("Você escolheu o bispo\n");
     printf("\n");
    moverbispo(casas);
    break;

    // codigo referent a movimentação do cavalo
    case 3:
    printf("Você escolheu o cavalo\n");
     printf("\n");
    int movimentodocavalo;
    
    for(movimentodocavalo = 0 ;movimentodocavalo <=2; movimentodocavalo++)
    {
        for(movimentodocavalo = 0 ; movimentodocavalo < 2; movimentodocavalo ++)
        {
            printf("cavalo andou para a cima\n");
        }
        printf("cavalo andou para a esquerda\n");
    }
    break;

    // codigo referente a movimentação da rainha
    default:
    printf("você escolheu a rainha\n");
     printf("\n");
    moverrainha(casas =8);
    break;
}
printf("\n");

    return 0;
}
