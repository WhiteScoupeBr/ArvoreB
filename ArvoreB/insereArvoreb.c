#include "arvoreb.h"

/*Função que divide um filho em dois e ajusta a árvore de modo que tenha um filho adicional.Fazendo com que a árvore cresça uma unidade*/
Arvore* dividir_no (Arvore *x, int i, Arvore *y)
{
    Arvore *z = criar();
    z->folha=y->folha;
    z->n=T-1;
    for(int j=0; j<T-1; j++)
    {
        z->chaves[j]=y->chaves[j+T];
    }
    if (y->folha == FALSE)
    {
        for (int j = 0; j < T; j++)
            z->filhos[j] = y->filhos[j+T];
    }
    y->n = T - 1;

    for (int j = x->n; j >= i+1; j--)
        x->filhos[j+1] = x->filhos[j];

    x->filhos[i+1] = z;

    for (int j = x->n-1; j >= i; j--)
        x->chaves[j+1] = x->chaves[j];

    x->chaves[i]= y->chaves[T-1];

    x->n = x->n + 1;

    return x;
}

/*Função que insere uma chave na árvore que se presume não estar cheia durante a chamada do procedimento.*/
Arvore* inserir_arvore_nao_cheia (Arvore *x, TIPO k)
{
    int i = x->n-1;
    if(x->folha==TRUE){
        while(i>=0&&k<x->chaves[i]){
            x->chaves[i+1]=x->chaves[i];
            i--;
        }
        x->chaves[i+1]=k;
        x->n=x->n+1;
    }
    else{
        while(i>=0&&x->chaves[i]>k){
            i--;
        }
        if(x->filhos[i+1]->n==(2*T)-1){
            dividir_no(x,i+1,x->filhos[i+1]);

            if(x->chaves[i+1]<k){
                i++;
            }
        }
        x->filhos[i+1]=inserir_arvore_nao_cheia(x->filhos[i+1],k);
    }

    return x;
}

/*Função para inserir uma chave em uma árvore B:*/
Arvore *inserir (Arvore *raiz, TIPO chave)
{
    Arvore *r = raiz;
    if (r->n == (2*T - 1))
    {
        Arvore *s = criar();
        s->folha = FALSE;
        s->filhos[0] = r;
        s = dividir_no (s, 0, r);
        s = inserir_arvore_nao_cheia (s, chave);
        return s;
    }
    else
    {
        return inserir_arvore_nao_cheia (r, chave);
    }
}




