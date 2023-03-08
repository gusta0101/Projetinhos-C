//Programa IMC.cpp

#include <stdlib.h>
#include <stdio.h>
#include <locale>
int main()

{
	float massa, peso, altura;
	char resp='n';
	setlocale(LC_ALL, "portuguese");
	printf("Calcular o Indice de massa corporal\n\n");
	do
	{
		printf("Informe o peso (em quilos): ");
		scanf("%f", &peso);
		printf("Informe a altura (em metros): ");
		scanf("%f", &altura);
		massa = peso / (altura*altura);
		printf("\nO Indice da massa corporal é: %.2f \n\n", massa);
		if(massa < 19.4){
			printf("Precisa aumentar");
		}
		if(massa > 19.4 && massa < 27.2){
			printf("Ideal");
		}
		if(massa > 27.2){
			printf("Precisa reduzir");
		}
		printf("\n\nGostaria de rodar novamente (s/n)? ");
		scanf("%s", &resp);
	}while( resp == 's' || resp == 'S');			
}
