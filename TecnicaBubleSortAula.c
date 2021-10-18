#include <stdio.h>

//Protótipo da função
void ordenandoVetor(int num[10]);

//Função principal
int main(){
	int vetor[10];
	int i;
	
	//Recebendo os elementos do vetor
	printf("\n Informe os dez elementos do vetor : \n");
	for(i = 0; i < 10; i++){
		scanf("%d", &vetor[i]);
	}
	//chamada da função
	ordenandoVetor(vetor);
	return 0;
}

void ordenandoVetor(int num[10]){
	int i;
	int pass;
	int temp;
	//ordenando vetor
	for(pass = 1; pass < 10; pass++){
		for(i = 0; i < 10-1; i++){
			if(num[i] > num[i+1]){
				temp = num[i];
				num[i] = num[i+1];
				num[i+1] = temp;
			}	
		}
	}
	//Exibindo vetor ordenado
	printf("\nDepois da ordenacao\n");
	for(i = 0; i < 10; i++){
		printf("%d\n", num[i]);
	}
	
}
