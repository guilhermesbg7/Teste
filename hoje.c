/********************************************
Nome: Guilherme Guimarães
Numero: 15456
Curso: EIM
Email: guilhermeguimaraes1998@gmail.com

Versão: 1.0
Data: 30-11-2020
********************************************/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int i;
	
	printf("Ola mundo\n\n");
	
	printf("Escolha um numero entre 1 e 2\n");
	scanf("%d", &i);
	
	if(i == 1){
	 printf("Escolheu o valor 1");
		}
	else if(i == 2){
		printf("Escolheu o valor 2");
	}
	else {
		printf("Numero invalido");	
	}
	
	return 0;
}
