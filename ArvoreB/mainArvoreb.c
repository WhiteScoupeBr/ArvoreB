#include "arvoreb.h"


/*Função principal:*/
int main () {

   Arvore *a = criar();

   /*Exercicio 18-2.1 Cormen*/
   a = inserir (a, 'F');
   a = inserir (a, 'S');
   a = inserir (a, 'Q');
   a = inserir (a, 'K');
   a = inserir (a, 'C');
   a = inserir (a, 'L');
   a = inserir (a, 'H');
   a = inserir (a, 'T');
   a = inserir (a, 'V');
   a = inserir (a, 'W');
   a = inserir (a, 'M');
   a = inserir (a, 'R');
   a = inserir (a, 'N');
   a = inserir (a, 'P');
   a = inserir (a, 'A');
   a = inserir (a, 'B');
   a = inserir (a, 'X');
   a = inserir (a, 'Y');
   a = inserir (a, 'D');
   a = inserir (a, 'Z');
   a = inserir (a, 'E');

   imprimir (a, 0);
   printf("------------------\n");

    //Arvore de entrada teste 1
   /*Arvore *c = criar();

   c = inserir (c, 'G');
   c = inserir (c, 'T');
   c = inserir (c, 'R');
   c = inserir (c, 'L');
   c = inserir (c, 'D');
   c = inserir (c, 'M');
   c = inserir (c, 'I');
   c = inserir (c, 'U');
   c = inserir (c, 'X');
   c = inserir (c, 'N');
   c = inserir (c, 'Q');
   c = inserir (c, 'B');
   c = inserir (c, 'C');
   c = inserir (c, 'Y');
   c = inserir (c, 'E');
   c = inserir (c, 'F');

   imprimir (c, 0);
   printf("------------------\n");

   remover(c,'N');
   printf("Letra removida 'N'\n");
   printf("Caso de Remocao 1\n");
   imprimir (c, 0);
   printf("------------------\n");

   remover(c,'R');
   printf("Letra removida 'R'\n");
   printf("Caso de Remocao 2A\n");
   imprimir (c, 0);
   printf("------------------\n");

   remover(c,'C');
   printf("Letra removida 'C'\n");
   printf("Caso de Remocao 2B\n");
   imprimir (c, 0);
   printf("------------------\n");
   */

   //Arvore de entrada teste 2
   /*Arvore *d=criar();

   d=inserir(d,'J');
   d=inserir(d,'A');
   d=inserir(d,'R');
   d=inserir(d,'M');
   d=inserir(d,'K');
   d=inserir(d,'N');
   d=inserir(d,'B');
   d=inserir(d,'P');
   d=inserir(d,'S');
   d=inserir(d,'V');
   d=inserir(d,'Z');
   d=inserir(d,'C');
   d=inserir(d,'D');

   imprimir (d, 0);
   printf("------------------\n");

   remover(d,'C');
   printf("Letra removida 'C'\n");
   printf("Caso de Remocao 1\n");
   imprimir (d, 0);
   printf("------------------\n");

   remover(d,'J');
   printf("Letra removida 'J'\n");
   printf("Caso de Remocao 2A\n");
   imprimir (d, 0);
   printf("------------------\n");

   remover(d,'S');
   printf("Letra removida 'S'\n");
   printf("Caso de Remocao 2B\n");
   imprimir (d, 0);
   printf("------------------\n");
   */


    //Arvore *b = criar();

   /*Teste numérico inserção arvore B*/
   /*b = inserir (b, 91);
   b = inserir (b, 90);
   b = inserir (b, 80);
   b = inserir (b, 71);
   b = inserir (b, 72);
   b = inserir (b, 50);
   b = inserir (b, 45);
   b = inserir (b, 47);
   b = inserir (b, 10);
   b = inserir (b, 8);
   b = inserir (b, 7);
   b = inserir (b, 5);
   b = inserir (b, 2);
   b = inserir (b, 3);
   b = inserir (b, 22);
   b = inserir (b, 44);
   b = inserir (b, 55);
   b = inserir (b, 66);
   b = inserir (b, 68);
   b = inserir (b, 17);
   b = inserir (b, 6);
   b = inserir (b, 21);
   b = inserir (b, 67);

   imprimir (b, 0);*/


   return 0;
}
