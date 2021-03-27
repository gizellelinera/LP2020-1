#include <stdio.h>
int main() {

int notas100, notas50, notas20, notas10, notas5, notas2, notas1, notas;


scanf("%i",&notas);

notas100=notas/100;
printf("%i notas de R$ 100\n", notas100);
notas= notas%100;

notas50=notas%100 /50;
printf("%i notas de R$ 50\n", notas50);
notas=notas%50;


notas20= notas%50/20;
printf("%i notas de R$ 20\n", notas20);
notas=notas%20;

notas10=notas%20 /10;
printf("%i notas de R$ 10\n", notas10);
notas=notas%10;

notas5=notas%10 /5;
printf("%i notas de R$ 5\n", notas5);
notas=notas%5;

notas2=notas%5 /2;
printf("%i notas de R$ 2\n", notas2);
notas=notas%2;

notas1=notas%2 /1;
printf("%i notas de R$ 1\n", notas1);
notas=notas%1;






  return 0;
}