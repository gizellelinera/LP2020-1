/*
#include <stdio.h>
#include <stdlib.h>

int main() {
int num,n1=-1,n2=-1,n3=-1;
  do{
	scanf("%i",&num);
	if(num>n1 && num>0){
		n3=n2;
		n2=n1;
		n1=num;
	}else {
		if (num>n2 &&num>0){
			n3=n2;
			n2=num;
		}else{
			if (num>n3 && num>0){
					n3=num;
			}
		}
  }
	}while(num!=0);
	  printf(" %i %i %i ",n1,n2,n3);

return 0;
}
*/