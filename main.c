#include <stdio.h>
#include <stdlib.h>
#include "ponto.h"

void menu();

int main(){
    Ponto *ponto1, *ponto2;
    float x, y;

    menu();

    int opcao;
    scanf("%d", &opcao);

    while(opcao != 0){
        if(opcao == 1){
            printf("\nPonto 1\nx1 y1: ");
            scanf("%f %f", &x, &y);

            ponto1 = criar(x, y);
            printf("\nPonto 1 criado!");
        }
        else if(opcao == 2){
            printf("\nPonto 2\nx2 y2: ");
            scanf("%f %f", &x, &y);

            ponto2 = criar(x, y);
            printf("\nPonto 2 criado!");
        }
        else if(opcao == 3){
            acessar(ponto1, &x, &y);
            printf("\nP1(%.1f, %.1f)", x, y);
        }
        else if(opcao == 4){
            acessar(ponto2, &x, &y);
            printf("\nP2(%.1f, %.1f)", x, y);
        }
        else if(opcao == 5){
            printf("\nPonto 1\nx1 y1: ");
            scanf("%f %f", &x, &y);

            atribuir(ponto1, x, y);
            printf("\nPonto 1 editado!");
        }
        else if(opcao == 6){
            printf("\nPonto 2\nx2 y2: ");
            scanf("%f %f", &x, &y);

            atribuir(ponto2, x, y);
            printf("\nPonto 2 editado.");
        }
        else if(opcao == 7){
            float d = distancia(ponto1, ponto2);
            printf("\nDistância entre os pontos: %.2f.", d);
        }
        else if(opcao == 8){
            liberar(ponto1);
            liberar(ponto2);

            printf("\nP1 e P2 liberados!");
        }

        limparTela();
        menu();
        scanf("%d", &opcao);
    }

    return 0;
}