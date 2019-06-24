all: saida
	@echo " " 
	@echo "Copilação concluída!!"
	@echo " " 
	 
saida: mainArvore.o buscaArvoreb.o criaArvoreb.o insereArvoreb.o printArvoreb.o removeArvoreb.o
	gcc -o saida mainArvore.o buscaArvoreb.o criaArvoreb.o insereArvoreb.o printArvoreb.o removeArvoreb.o

mainArvore.o: mainPrincipal.c arvoreb.h
	-o mainArvore.o -c mainArvore.c

buscaArvoreb.o: buscaArvoreb.c arvoreb.h
	-o buscaArvoreb.o -c buscaArvoreb.c

criaArvoreb.o: criaArvoreb.c arvoreb.h
	-o criaArvoreb.o -c criaArvoreb.c

insereArvoreb.o: insereArvoreb.c arvoreb.h
	-o insereArvoreb.o -c insereArvoreb.c

printArvoreb.o: printArvoreb.c arvoreb.h
	-o printArvoreb.o -c printArvoreb.c

removeArvoreb.o: removeArvoreb.c arvoreb.h
	-o removeArvoreb.o -c removeArvoreb.c

clean: 
	rm -f *.o
	
execClean:
	rm -f saida

