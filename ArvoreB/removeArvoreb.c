#include "arvoreb.h"

/*Função que remove a posição index de um nó folha*/
Arvore* remover_de_folha (Arvore *a, int index)
{
    for(int i=index+1; i<a->n; i++)
        a->chaves[i-1]=a->chaves[i];
    a->n--;
    return a;
}


/*Função que remove a chave contida na posição index de um nó não folha*/
Arvore* remover_de_nao_folha (Arvore *a, int index)
{
    TIPO k = a->chaves[index];
    TIPO predecessor, sucessor;

    /*Se o nó filho precede o K e tem pelo menos T chaves,substituindo k pelo predecessor*/
    if (a->filhos[index]->n >= T)
    {
        Arvore *pred=a->filhos[index];
        while(pred->folha!=TRUE)
            pred=pred->filhos[pred->n];

        predecessor= pred->chaves[pred->n-1];

        a->chaves[index]=predecessor;
        free(a->filhos[index]);
    }
    /*Se o filho tem menos de T chaves, observar o filhos[index+1~], substituindo o K pelo sucessor*/
    else if (a->filhos[index+1]->n >= T)
    {
        Arvore *suc=a->filhos[index+1];

        while(suc->folha!=TRUE)
            suc=suc->filhos[0];

        sucessor= suc->chaves[0];
        a->chaves[index]=sucessor;
        free(a->filhos[index+1]);

    }
    /*Descrição ...*/
    else
    {
        /*Completar!!!!*/
        printf("Completar\n");
    }

    return a;
}


//Função para verificar se raiz ficou vazia
Arvore *verificar_raiz_vazia (Arvore *raiz)
{
    /*Se após a remoção a raiz tiver 0 chaves, tornar o primeiro filho a nova raiz se existir filho; caso contrário ajustar a raiz para NULL. Liberar a raiz antiga*/

    if(raiz->n==0)
    {
        Arvore *tmp=raiz;
        if(raiz->folha)
            raiz=NULL;
        else
            raiz=raiz->filhos[0];
        free(tmp);
    }

    return raiz;
}



/*Função que retorna o index da primeira chave maior ou igual à chave*/
int buscar_index_remocao (Arvore *a, TIPO chave)
{

    int i = 0;

    /*Procurando a chave no vetor de chaves */
    while ((i < a->n) && (chave > a->chaves[i]))
    {
        i = i + 1;
    }

    return i;
}

/*Descrição: ????*/
Arvore *remover (Arvore *a, TIPO k)
{
    int index;

    /*Completar!!!!!!!!!!!!!!*/
    if (a == NULL)
    {
        printf("Erro -> Árvore Vazia!\n");
        return a;
    }

    index = buscar_index_remocao (a, k);


    //A chave a ser removida está presente neste nó
    if ( index >= 0 && a->chaves[index] == k)
    {
        if (a->folha)
        {
            a = remover_de_folha (a, index);
        }
        else
        {
            a = remover_de_nao_folha (a, index);
        }
    }
    else
    {
        //Se este nó é um nó folha, então a chave não está na árvore
        if (a->folha)
        {
            printf("\nA chave %c não está na árvore.\n",k);
            //printf("\nA chave %d não está na árvore.\n",k);
            return a;
        }

        //Completar
        // bool flag = ((index==a->n)?TRUE:FALSE);

        if(a->filhos[index]->n<T)
        {
            if(index!=0&&a->filhos[index-1]->n>=T)

            }

        printf("Completar\n");


    }
    a = verificar_raiz_vazia(a);

    return a;
}

