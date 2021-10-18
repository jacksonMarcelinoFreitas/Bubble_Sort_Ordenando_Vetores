#include <stdlib.h>
#include <stdio.h> 

//prot�tipo
void ordenar_vetor(int vetor[]);

//Fun��o principal
int main(){
	int vetor[10];
	int i;
	
	printf("Informe 10 numeros aleatorios para o vetor\n");
	for(i = 0; i < 10; i++){
	scanf("%d", &vetor[i]);	
	}
	
	//chamando a fun��o e colocando vetor como argumento;
	ordenar_vetor(vetor);
	
	return 0;
}

//Fun��o de ordenar
void ordenar_vetor(int vetor[]){
	
	int i, j, aux;
	//Ordenando
	for(i = 0; i < 10; i++){
		for(j = i+1; j < 10; j++ ){
			if(vetor[i] > vetor[j]){
				aux = vetor[i];
				vetor[i] = vetor[j];
				vetor[j] = aux;
			}
		}
	}
	//Exibindo
	printf("\nVetor ordenado com sucesso!\n");
	for(i = 0; i < 10; i++){
		printf("%d ,", vetor[i]);
	}
}
