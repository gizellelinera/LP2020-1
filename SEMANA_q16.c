/*
#include <stdio.h>
#include <stdlib.h>

int main() {
  
int valor, media=0,i=1, soma=0,novovalor=0;
int v1=0,v2=0,v3=0,v4=0,v5=0, v6=0;
int esquentou=0;
do{
	scanf("%i",&valor);
	if(valor>0){
		v6=v5;  //armazena 6 valores
		v5=v4;
		v4=v3;
		v3=v2;
		v2=v1;
		v1=valor;
		soma=soma+valor;  //soma os seis valores
		i++;
	}
	if(i>=6 &&valor>=0){
			soma=soma-v6;   //diminui o ultimo valor
			media=soma/5.0;
		if(media>1000){
			esquentou=1;
		}
	}
}while(valor>0);
	
	if(esquentou==0){
		printf("TURNO TRANQUILO\n");
	}
	else{
		printf("DEU RUIM\n");
	}


return 0;
}
*/