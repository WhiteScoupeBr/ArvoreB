#include "arvoreb.h"

/*Função que remove a posição index de um nó folha*/
Arvore* remover_de_folha (Arvore *a, int index){
   for(int i=index+1;i<a->n;i++)
    a->chaves[i-1]=a->chaves[i];
   a->n--;
   return a;
}


/*Descrição ...*/
Arvore* remover_de_nao_folha (Arvore *a, int index){
   TIPO k = a->chaves[index];
   TIPO predecessor, sucessor;

   /*Descrição ...*/
   if (a->filhos[index]->n >= T){
      /*Completar!!!!*/
      printf("Completar\n");
   }
  /*Descrição ...*/
   else if (a->filhos[index+1]->n >= T){
      /*Completar!!!!*/
      printf("Completar\n");
   }
   /*Descrição ...*/
   else{
       /*Completar!!!!*/
       printf("Completar\n");
   }

   return a;
}


//Função para verificar se raiz ficou vazia
Arvore *verificar_raiz_vazia (Arvore *raiz){
    /*Se após a remoção a raiz tiver 0 chaves, tornar o primeiro filho a nova raiz se existir filho; caso contrário ajustar a raiz para NULL. Liberar a raiz antiga*/

   /*Completar!!!! */
   printf("Completar\n");

    return raiz;
}



/*Função que retorna o index da primeira chave maior ou igual à chave*/
int buscar_index_remocao (Arvore *a, TIPO chave) {

   int i = 0;

   /*Procurando a chave no vetor de chaves */
   while ((i < a->n) && (chave > a->chaves[i])) {
     i = i + 1;
   }

   return i;
}

/*Descrição: ????*/
Arvore *remover (Arvore *a, TIPO k){
   int index;

   /*Completar!!!!!!!!!!!!!!*/
   if (a == NULL) {
      printf("Erro -> Árvore Vazia!\n");
      return a;
   }

   index = buscar_index_remocao (a, k);


   //A chave a ser removida está presente neste nó
   if ( index >= 0 && a->chaves[index] == k){
      if (a->folha){
         a = remover_de_folha (a, index);
      }
      else{
         a = remover_de_nao_folha (a, index);
      }
   }
   else{
      //Se este nó é um nó folha, então a chave não está na árvore
      if (a->folha){
  	 printf("\nA chave %c não está na árvore.\n",k);
  	 //printf("\nA chave %d não está na árvore.\n",k);
         return a;
      }

      bool flag = ((index==a->n)?TRUE:FALSE);

      if(a->filhos[index]->n<T){
        if(index!=0&&a->filhos[index-1]->n>=T)

      }

      printf("Completar\n");


   }
   a = verificar_raiz_vazia(a);

   return a;
}

