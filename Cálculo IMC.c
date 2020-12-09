/*
 Autor: Julio Gabriel P. Otoni 
 Data : 08/12/2001
*/

#include <stdio.h> // Biblioteca. 

// Função para calcular IMC, facilita o usa da equação.
float CalcularIMC(float peso, float altura){
	
	float IMC = peso / (altura*altura);
	
	return IMC;
}

// Código de execução do IMC.
int main (void){
	
	int opcao;
	float peso, altura;
	
	printf (" \n***********************************************");
	printf ("\n Digite o numero que deseja consultar:\n");
	printf ("\n [1] Calcular Indice de Massa Corporal - IMC\n");
	printf (" [2] Sobre\n");
	scanf ("%d", &opcao);
	printf (" \n***********************************************");
	
	switch (opcao){
		case 1:
			
			//Calcula o IMC. 
			
			printf("\n Descubra seu IMC, digite os dados abaixo:\n");
			printf(" Digite seu peso: ");
			scanf ("%f", &peso);
			printf(" Digite sua altura: ");
			scanf ("%f", &altura);
			
			float IMC = CalcularIMC(peso,altura); // Uso da função da equação do IMC.
			
			if (IMC <= 17){
			
				printf("\n Seu IMC: %1.1f\n", IMC); 
				printf(" Categoteria: Muito abaixo do peso");
			}
		
			else if (IMC > 17 && IMC <= 18.49){
				
				printf("\n Seu IMC: %1.1f\n", IMC); 
				printf(" Categoria: Abaixo do peso ideal");
			}
			else if (IMC >= 18.50 && IMC <= 24.99){
				
				printf("\n Seu IMC: %1.1f\n", IMC); 
				printf(" Categoria: Peso considerado normal");
			}
			else if (IMC >= 25 && IMC <= 29.99){
				
				printf("\n Seu IMC: %1.1f\n",IMC); 
				printf(" Categoria: Acima do peso");
			}
			else if (IMC >= 30 && IMC <= 34.99){
				
				printf("\n Seu IMC: %1.1f\n", IMC);
				printf(" Categoria: Obesidade grau I");
			}
			else if (IMC >= 35 && IMC <= 39.99){
				
				printf("\n Seu IMC: %1.1f\n", IMC);
				printf(" Categoria: Obesidade grau II (severa)");
			}
			else if (IMC >= 40){
				
				printf("\n Seu IMC: %1.1f\n", IMC);
				printf(" Categoria: Obesidade grau III (obesidade morbida)");
			}
			break;
		case 2:
			// Objetivo do programa para o usuário.
			
			printf("\n Esse programa tem por obejivo informar o seu IMC\n");
			printf(" e mostrar a categoria que se encontra.\n");
			printf("\n SEGUE ABAIXO AS CATEGORIAS EXISTENTES: \n");
			printf("\n Abaixo de 17: Muito abaixo do peso\n");
			printf("\n Entre 17 e 18,49: Abaixo do peso ideal\n");
			printf("\n Entre 18,5 e 24,99: Peso considerado normal\n");
			printf("\n Entre 25 e 29,99: Acima do peso\n");
			printf("\n Entre 30 e 34,99: Obesidade grau I\n");
			printf("\n Entre 35 e 39,99: Obesidade grau II (severa)\n");
			printf("\n Acima de 40: Obesidade grau III (conhecida como obesidade morbida)\n");
			break;
	
		default:
			// Caso a informação não seja coerente com  as registradas, mostra essa mensagem de erro.
			
			printf("\n Informação invalida");
			break;
	}
	
	return 0;
}
