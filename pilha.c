#include<stdlib.h>
#include<stdio.h>

#define TAM 50

typedef struct {
    int item[TAM];
    int topo;
}tPilha;

void pilhaStart(tPilha *p){
    p->topo = -1;
}

int pilhaVazia(tPilha *p){
    if (p->topo == -1){
        return 1;
    }else{
        return 0;
    }
}

int pilhaCheia(tPilha *p){
    if (p->topo == TAM -1){
        return 1;
    }else{
        return 0;
    }
}

void pilhaInsert(tPilha *p, int valor){
    if (pilhaCheia(p) == 1){
        printf("Pilha esta cheia");
    }else{
        p->topo++;
        p->item[p->topo] = valor;
    }
}

int pilhaRemove(tPilha *p){
    int auxP;
    if(pilhaVazia(p) == 1){
        printf("Pilha ja esta vazia");
    }else{
        auxP = p->item[p->topo];
        p->topo--;
        return auxP;
    }
}

int main(){
    tPilha *p = (tPilha*)malloc(sizeof(tPilha));

    pilhaStart(p);

    pilhaInsert(p, 1);
    pilhaInsert(p, 2);
    pilhaInsert(p, 3);
    pilhaInsert(p, 4);
    pilhaInsert(p, 5);

    int itemR;

    itemR = pilhaRemove(p);
    printf("Item removido foi = %i \n", itemR);

    itemR = pilhaRemove(p);
    printf("Item removido foi = %i \n", itemR);

    itemR = pilhaRemove(p);
    printf("Item removido foi = %i \n", itemR);

    return 0; 
} 