//programa cronometro

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <locale>
#include <windows.h>

int main(){
	int seg=0;
	int min=0;
	int desej;
	int error;
	setlocale(LC_ALL, "portuguese"); //Muda o idioma para permitir acentos, porém pode dar alguns bugs
	printf("Cronômetro\n");
do{
	if (error == 1){ //Caso dê erro, o codigo se repete
		printf("\nErro. Digite novamente. ");
	}
	error = 0;
	printf("\nAté quantos minutos o relógio deve ir (1min - 59min): ");
		while(scanf("%i",&desej)==0){ //valida se é um número ou não
		if (desej >= 1 && desej <= 59){
			printf("\nAté quantos minutos o relógio deve ir (1min - 59min): ");
			scanf("%i",&desej);}
		else
			printf("\nErro. Digite novamente.");
			printf("\nAté quantos minutos o relógio deve ir (1min - 59min): ");
			scanf("%i",&desej);
			scanf("%s",&desej);
	}

	if (desej >= 60 || desej <= 0){ //se for igual ou maior a 60 ou menor que 0, ele dá loop denovo
		error = 1;}
	}while(desej >= 60 || desej <= 0);
	do{
		system("cls");
		if(seg <= 9 || seg == 0){ //Antes de 10, ele acrescenta um 0. (Ex.> 04 05)
			seg=seg+1;
			printf("%i:0%i\n", min, seg); 
			Sleep(1000); //1s
		}
		if(seg >= 9 && seg != 59){ //Maior que 10 e até 59s ele remove o 0
			if (seg == 9){
				system("cls");
			}
			seg=seg+1;
			printf("%i:%i\n", min, seg);	
			Sleep(1000);}
		if(seg == 59){ //Bateu 19 ele aumenta 1 minuto e volta para 0 os segundos
			system("cls");
			min=min+1;
			seg=0;
			printf("%i:0%i\n", min, seg);
			Sleep(1000);}
	}while(min != desej); //Quando bater o tempo colocado ele termina
	system("cls");
	printf("Tempo encerrado!");

}

