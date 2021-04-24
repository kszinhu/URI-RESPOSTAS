/*
    1069 - Diamantes e Areia
    > Cassiano Rodrigues
    > 14/04/2021
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

typedef struct stack
{
    int head;
    char element[1000];
} Stack;

Stack createstack()
{
    Stack pilha;
    pilha.head = -1;

    return pilha;
}

bool vazia(Stack *pilha)
{
    return (pilha->head == -1);
}

void push(Stack *pilha, char data)
{
    // Inserindo no Inicio
    pilha->head++;
    pilha->element[pilha->head] = data;
}

char pop(Stack *pilha)
{
    char data;
    data = (*pilha).element[(*pilha).head];
    (*pilha).head--;
    return data;
}

main()
{
    int quant, tam, diamante;
    int i;
    char mina[1001];

    scanf("%d", &quant);
    while (quant--)
    {
        scanf("%s", mina);
        tam = strlen(mina);
        diamante = 0;
        Stack pilha = createstack();
        for (i = 0; i < tam; i++)
        {
            if (mina[i] == '<')
            {
                push(&pilha, mina[i]);
            }
            else if (!vazia(&pilha) && mina[i] == '>')
            {
                pop(&pilha);
                diamante++;
            }
        }
        printf("%d\n", diamante);
    }
    system("pause");
}