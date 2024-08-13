#include <stdio.h>
#include <stdlib.h>
#include "ponto.h"
#include <math.h>


Ponto* criar(float x, float y){
    Ponto* p = (Ponto*)malloc(sizeof(Ponto));
    if(p == NULL){
        printf("\nMemória insuficiente!");
        exit(1);
    }
    
    p->x = x;
    p->y = y;

    return p;
}

void liberar(Ponto* p){
    free(p);
}

void acessar(Ponto* p, float* x, float* y){
    *x = p->x;
    *y = p->y;
}

void atribuir(Ponto* p, float x, float y){
    p->x = x;
    p->y = y;
}

float distancia(Ponto* p1, Ponto* p2){
    float dx = p2->x - p1->x;
    float dy = p2->y - p1->y;

    return sqrt(dx*dx + dy*dy);
}

void menu(){
    printf("\n- - - - - - - - - - Pontos - - - - - - - - - -");
    printf("\n\n1-Criar Ponto 1");
    printf("\n2-Criar Ponto 2");
    printf("\n3-Acessar Ponto 1");
    printf("\n4-Acessar Ponto 2");
    printf("\n5-Atribuir novo valor Ponto 1");
    printf("\n6-Atribuir novo valor Ponto 2");
    printf("\n7-Distancia dos Pontos");
    printf("\n8-Liberar Pontos");
    printf("\n\n0-Sair");
    printf("\n\n>>>> ");
}

void limparTela(){
    printf("\n<enter> to continue...");
    getchar();
    while(getchar() != '\n');
    system("clear");
}