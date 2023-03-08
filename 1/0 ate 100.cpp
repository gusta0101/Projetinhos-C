//teste ate 100

#include <stdlib.h>
#include <stdio.h>
#include <windows.h>
#include <unistd.h>

int main(){
	int cont=0;
	printf("De 0 ate 100\n\n"); //Incio do programa
	system("pause"); //Pausa antes da execução
	system("cls"); //Limpa a tela antes de prosseguir com a contagem diretamente
	do{ //Enquanto a contagem for igual ou menor a 100, ele vai ficar adicionando +1, usleep faz intervalo
		if(cont <= 100){
			cont=cont+1;
			printf("%i\n", cont);
			usleep(96000); //96ms de tempo
		}
	}while(cont != 100); //Chega ao fim do programa e pausa antes de fechar
	printf("\nFim\n");
	system("pause");
}
