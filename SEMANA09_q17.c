#include <stdio.h>
#include <stdlib.h>

int main() {
  int vetor[10]={0,0,0,0,0,0,0,0,0,0};
	int i ,num,cont;
	
	do{
		scanf("%i",&num);
			
			if(num==0){
				vetor[0]++;
			}
			if(num==1){
				vetor[1]++;
			}
			if(num==2){
				vetor[2]++;
			}
			if(num==3){
				vetor[3]++;
			}
			if(num==4){
				vetor[4]++;
			}
			if(num==5){
				vetor[5]++;
			}
			if(num==6){
				vetor[6]++;
			}
			if(num==7){
				vetor[7]++;
			}
			if(num==8){
				vetor[8]++;
			}
			if(num==9){
				vetor[9]++;
			}
	}while(num>=0);
		for(i=0;i<10;i++){
			if(vetor[i]>=1){
				printf("%i : %i\n",i,vetor[i]);
			}
		}
	return 0;
}

