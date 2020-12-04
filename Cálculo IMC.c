#include <stdio.h>

float CalcularIMC(float peso, float altura){
	
	float IMC = peso / (altura*altura);
	
	return IMC;
}
int main (void){
	
	int opcao;
	float peso, altura;

	printf ("\n Digite o numero que deseja consultar:\n");
	printf ("\n [1] Calcular IMC\n");
	printf (" [2] Sobre o prorgama\n");
	scanf ("%d", &opcao);
	
	switch (opcao){
		case 1:
			//faça a operação sobre o imc
			printf("\n Descubra seu IMC, digite os dados abaixo:\n");
			printf(" Digite seu peso: ");
			scanf ("%f", &peso);
			printf(" Digite sua altura: ");
			scanf ("%f", &altura);
			
			float IMC = CalcularIMC(peso,altura);
			
			if (IMC <= 17){
			
				printf("\n Seu IMC: %1.1f\n", IMC); 
				printf(" Categoteria: muito abaixo do peso");
			}
		
			else if (IMC > 17 && IMC <= 18.49){
				
				printf("\n Seu IMC: %1.1f\n", IMC); 
				printf(" Categoria: abaixo do peso ideal");
			}
			else if (IMC >= 18.50 && IMC <= 24.99){
				
				printf("\n Seu IMC: %1.1f\n", IMC); 
				printf(" Categoria: peso considerado normal");
			}
			else if (IMC >= 25 && IMC <= 29.99){
				
				printf("\n Seu IMC: %1.1f\n",IMC); 
				printf(" Categoria: acima do peso");
			}
			else if (IMC >= 30 && IMC <= 34.99){
				
				printf("\n Seu IMC: %1.1f\n", IMC);
				printf(" Categoria: obesidade grau I");
			}
			else if (IMC >= 35 && IMC <= 39.99){
				
				printf("\n Seu IMC: %1.1f\n", IMC);
				printf(" Categoria: obesidade grau II (severa)");
			}
			else if (IMC >= 40){
				
				printf(" Seu IMC: %1.1f\n", IMC);
				printf(" Categoria: obesidade grau III ( obesidade morbida)");
			}
			break;
		case 2:
			//obejtivo do programa
			printf("\n Esse programa tem por obejivo informar o seu IMC\n");
			printf(" e mostrar a categoria que se encontra.\n");
			printf("\n SEGUE ABAIXO AS CATEGORIAS EXISTENTES: \n");
			printf("\n Abaixo de 17: muito abaixo do peso\n");
			printf("\n Entre 17 e 18,49: abaixo do peso ideal\n");
			printf("\n Entre 18,5 e 24,99: peso considerado normal\n");
			printf("\n Entre 25 e 29,99: acima do peso\n");
			printf("\n Entre 30 e 34,99: obesidade grau I\n");
			printf("\n Entre 35 e 39,99: obesidade grau II (severa)\n");
			printf("\n Acima de 40: obesidade grau III (conhecida como obesidade morbida)\n");
			break;
	
		default:
			printf("\n Informação invalida");
			break;
	}
	
	return 0;
}
