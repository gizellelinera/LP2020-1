#include <stdio.h>
#include <stdlib.h>
  int main() {

    int i,contzero=0,contum=0,seqzero=0,sequm=0;
		int vetor[10];
		
		for(i=0;i<100;i++){
			scanf("%i",&vetor[i]);
		}
		for(i=0;i<100;i++){
			if(vetor[i]==0){
				if (contum>0){
					contzero=0;
					contum=0;
				}
				contzero++;
				//printf(" contzero: %i\n",contzero);
				if(contzero>seqzero){
					seqzero=contzero; //transferi valores para a sequencia
				}
			}
				if(vetor[i]==1){
					if(contzero>0){
						contum=0;
						contzero=0;
				}
				contum++;
				
				if(contum>sequm){
					sequm=contum;
				}
				
				}
		}
				
				if(seqzero>sequm){
					printf("%i",seqzero);
				}else{
					printf("%i",sequm);
				}
        return 0;
}
