#include <stdio.h>
#include <stdlib.h>
  int main() {
    int vetor[10];
int num,i,j, aux;

for(i=0;i<10;i++){
	scanf("%i",&vetor[i]);
}

for(i=0;i<10-1;i++){
	for(j=i+1;j<10;j++){
		if(vetor[i]>vetor[j]){ //COMPARA QUEM É MAIOR 
			aux=vetor[i];      //TRANSFERE PARA AUX NUMEROS MAIORES
			vetor[i]=vetor[j];  //TRANFERE PARA VETOR[I] NUMEROS MENORES
			vetor[j]=aux;     //TRANSFERE NUMEROS MAIORES
		}
	}
}
	for(i=0;i<10;i++){   //MOSTRA O RESULTADO 
		printf("%i",vetor[i]);
	}
		printf("\n");
	for(i=10-1;i>=0;i--){  //INVERTENDO A ORDEM DO RESULTADO
		printf("%i",vetor[i]);
}


	return 0;
}

