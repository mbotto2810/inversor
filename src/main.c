/* Data de submissao: 29/04/2020
 * Nome: Maruan Bakri Ottoni
 * RA: 222025
 */

#include <stdio.h>
const int tam_buffer = 100;

char pilha[100];
int n_pilha=0;

void push(char c) {
//Coloca elemento na pilha
 	if (n_pilha < tam_buffer) {
		pilha[n_pilha]=c;
		n_pilha++;
	}
}

char pop() {
//Remove elemento na pilha  
	char c;
	if (n_pilha>0) {
		n_pilha--;
		c = pilha[n_pilha];
	}
	return c;
}


void esvaziar(){
	//imprime tudo que esta na pilha , esvaziando-a
	char c;
	while (n_pilha != 0 ) {
		c = pop();
		printf("%c",c);
	}

}

int main() {
	char buffer[tam_buffer];
	fgets(buffer, tam_buffer, stdin);
  	
	unsigned int i = 0;
	while (buffer[i] != '\n') {
		if (buffer[i] == '\0' || buffer[i] == '\t' || buffer[i] == ' ') {
			esvaziar();
			printf("%c",buffer[i]);	
		}

		else {
			push(buffer[i]);
		}

		i++;
	}
	esvaziar();
	printf("%c",buffer[i]);	
	return 0;
}
