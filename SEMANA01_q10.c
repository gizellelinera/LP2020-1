/*#include <stdio.h>
int main() {

int n4,n3,n2,n1,n0, num;

	scanf("%i",&num);
		if(num>=1000){
			
		n4 = num/1000;    //valor de n4
		switch (n4){
			case 1: printf("mil\t");
			break;
			case 2:printf("dois mil\t");
			break;
			case 3: printf("trez mil\t");
			break;
			case 4: printf("quatro mil\t");
			break;
			case 5: printf("cinco mil\t");
			break;
			case 6: printf("seis mil\t");
			break;
			case 7: printf("sete mil\t");
			break;
			case 8: printf("oito mil\t");
			break;
			case 9: printf("nove mil\t");
			break;
			default:
				printf("");
		}
		if(num%1000>=1 && num%1000<=99){ // para ir o E entre 1090 e 10009 
				printf("e\t");		
		}
		}
		num= num-n4*1000;  // atualiza o num 
		
		if(num<1000 && num>=100){ 
		n3 = num/100;  // valor de  n3
		switch (n3){
			case 1: printf("cem\t");
			break;
			case 2:printf("duzentos\t");
			break;
			case 3: printf("trezentos\t");
			break;
			case 4: printf("quatrocentos\t");
			break;
			case 5: printf("quinhentos\t");
			break;
			case 6: printf("seiscentos\t");
			break;
			case 7: printf("setecentos\t");
			break;
			case 8: printf("oitocentos\t");
			break;
			case 9: printf("novecentos\t");
			break;
			default:
				printf("");
	}
	
		if(num%100!=0){ //para ir o E entre 990 e 999
		printf("e\t");			
	}
}
		num=num%100;  // atualiza o num
		if(num<100 && num>=20){
			n2=num/10;  //valor de n2
			switch (n2){
		//	case 1: printf("dez\t");
			break;
			case 2:printf("vinte\t");
			break;
			case 3: printf("trinta\t");
			break;
			case 4: printf("quarenta\t");
			break;
			case 5: printf("cinquenta\t");
			break;
			case 6: printf("sessenta\t");
			break;
			case 7: printf("setenta\t");
			break;
			case 8: printf("oitenta\t");
			break;
			case 9: printf("noventa\t");
			break;
			default:
				printf("");
		}
	
		if(num%10>=1 && num%10<=9){ //para colocar o E entre 21 e 99
			printf("e\t");
		}
	}
		
			num=num%100;  // atualiza o num
	 		if(num>=10 && num<20){
		
			n1=num/1;   // valor de n1
			switch (n1){
			case 10: printf("dez\t");
			break;	
			case 11: printf("onzet");
			break;
			case 12:printf("doze\t");
			break;
			case 13: printf("treze\t");
			break;
			case 14: printf("quatorze\t");
			break;
			case 15: printf("quinze\t");
			break;
			case 16: printf("dezesseis\t");
			break;
			case 17: printf("dezessete\t");
			break;
			case 18: printf("dezoito\t");
			break;
			case 19: printf("dezenove\t");
			break;
			default:
				printf("");
			}
			
		} else{
	      
		num=num%10;  // valor de num
		if(num<10 && num>=0){
			n0 = num/1; // valor de n0
			switch (n0){
			case 1: printf("um\t");
			break;
			case 2:printf("dois\t");
			break;
			case 3: printf("três\t");
			break;
			case 4: printf("quatro\t");
			break;
			case 5: printf("cinco\t");
			break;
			case 6: printf("seis\t");
			break;
			case 7: printf("sete\t");
			break;
			case 8: printf("oito\t");
			break;
			case 9: printf("nove\t");
			break;
			default:
				printf("");
	}
	}
		
		

}

	return 0;
	}
	*/