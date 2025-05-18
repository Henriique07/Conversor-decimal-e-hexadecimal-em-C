#include <stdio.h>
#include <stdlib.h>

int main(){
	int opcao;
	int valor;
	
	printf ("=-=-=[MENU]=-=-=\n");
	printf ("1 - Para converter decimal para hexadecimal\n");
	printf ("2 - Para converter hexadecimal para decimal\n");
	scanf ("%d", &opcao);// Armazena o numero da opção
	getchar();// Limpa o buffer do teclado
	
	system("cls"); // Limpa a pagina
	
	if (opcao==1){// Caso a opção seja 1 o comando abaixo sera executado
		printf ("Digite o valor em decimal: ");
		scanf ("%d", &valor);// Armazena o valor que será transaformado em hexadecimal
		getchar();
		
		printf ("O valor: %d, em hexadecimal e: %x\n", valor, valor);// Transforma o valor digitado pelo usuario em hexadecimal 
	}																// através do %x que transforma decimal para hexadecimal
	else if (opcao == 2){// Caso a opção seja 2 o comando abaixo sera executado
		printf ("Digite o valor em hexadecimal: ");
		scanf ("%x", &valor);// Armazena o valor que será transformado para decimal
		
		printf ("O valor: %x, em decimal e: %d\n", valor, valor);// Transforma o valor digitado pelo usuario em decimal
																// através do %d que transforma hexadecimal para decimal
	}
}