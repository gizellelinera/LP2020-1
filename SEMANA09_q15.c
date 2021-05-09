#include <stdio.h>
#include <stdlib.h>

int main() {
  int valor, i=1,t;
	int quente=0;
	
	do{
		scanf("%i",&valor);
		
		if(valor>1000){
		quente=1;
		
		}else{
			if(valor<=1000 && valor>=0){
				quente=0;
			}
		}
	}while(valor>=0);
	
		if(quente==1){
			printf("DEU RUIM");
		}else{
			printf("TURNO TRANQUILO");
    }
return 0;
}