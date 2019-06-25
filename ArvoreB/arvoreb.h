#ifndef _ARVOREB_H_
#define _ARVOREB_H_

#include <stdio.h>
#include <stdlib.h>

#define TIPO char

#define T 2           /*Número que define mínimo e máximo de chaves!*/
#define NOT_FOUND -1  /*Valor retornado quando o nó não existe!*/
#define TRUE 1        /*Booleano para verdadeiro!*/
#define FALSE 0       /*Booleano para falso!*/

/*Estrutura básica para uma árvore B: */
typedef struct _node {
  int n; /*Número de chaves armazenadas no nó!*/
  int folha; /*Booleano que indica se o nó é folha ou não!*/
  TIPO chaves[2 * T - 1]; /*Número máximo de chaves {tipo char} em um nó!*/
  struct _node *filhos[2 * T]; /*Ponteiros para os filhos de cada nó!*/
} No, Arvore;



/*Função para criar e inicializar uma árvore B:*/
Arvore* criar ();

/*Função para buscar uma chave em uma árvore B:*/
void imprimir (Arvore *a, int nivel);

/*Função para buscar uma chave em uma árvore B:*/
int buscar (Arvore *a, TIPO chave);

/*Função que divide um filho em dois e ajusta a árvore de modo que tenha um filho adicional.Fazendo com que a árvore cresça uma unidade*/
Arvore* dividir_no (Arvore *x, int i, Arvore *y);

/*Função que insere uma chave na árvore que se presume não estar cheia durante a chamada do procedimento.*/
Arvore* inserir_arvore_nao_cheia (Arvore *x, TIPO k);

/*Função para inserir uma chave em uma árvore B:*/
Arvore *inserir (Arvore *raiz, TIPO chave);

/*Caso 1;Função que remove a posição index de um nó folha*/
Arvore* remover_de_folha (Arvore *a, int index);

/*Função que remove a chave contida na posição index de um nó não folha*/
Arvore* remover_de_nao_folha (Arvore *a, int index);

//Função para verificar se raiz ficou vazia
Arvore *verificar_raiz_vazia (Arvore *raiz);

/*Função que retorna o index da primeira chave maior ou igual à chave*/
int buscar_index_remocao (Arvore *a, TIPO chave);

/*Funcao que verifica qual o caso de remocao, e que ocorre a recursividade passando pelos filhos ate achar o K desejado*/
Arvore *remover (Arvore *a, TIPO k);


#endif
