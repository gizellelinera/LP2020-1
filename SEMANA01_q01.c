#include <stdio.h>
int main() {
  float valor,desc;

  scanf("%f",&valor);
  if(valor<=100){
    printf("R$%.2f",valor);
  }
  if(valor>100 && valor<=200){
    desc=valor*0.05;
    valor =valor-desc;
    printf("R$%.2f",valor);
  }
  if(valor>=200){
    desc=valor*0.10;
    valor= valor-desc;
    printf("R$%.2f",valor);
  }


    return 0;
  }