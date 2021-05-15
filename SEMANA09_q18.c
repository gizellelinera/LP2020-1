#include <stdio.h>
#include <stdlib.h>
int main() {
  	int vetor[99], i=0,num;
	
		scanf("%i",&num);
	for(i=0;i<num;i++){
		scanf("%i",&vetor[i]);  //ATRIBUI VALOR AS POSIÇÕES DO VETOR
	}
	for(i=num-1;i>=0;i--){     // INVERTE A POSIÇÃO DO VETOR
	//	printf("%i",i);
		printf("%i",vetor[i]);  //IMPRIMIR O RESULTADO FINAL
	}
  return 0;
}
