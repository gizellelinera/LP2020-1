#include <stdio.h>
int main() {

int n1,n2,n3,n4,n5,n6,n7,n8,n9,n10,n11,n12,n13,impar=0,par=0, num,dig;

	scanf("%i %i %i %i %i %i %i %i %i %i %i %i %i",&dig,&n1,&n2,&n3,&n4,&n5,&n6,&n7,&n8,&n9,&n10,&n11,&n12);
	
	impar= n1+n3+n5+n7+n9+n11;
	par=n2+n4+n6+n8+n10+n12;

	impar=impar*3;
	num=impar+par;
		
		
		num=num+dig;
		if(num%10==0){
		printf("S\n");
	}else{
		printf("N\n");
	}
		
	return 0;
}
	