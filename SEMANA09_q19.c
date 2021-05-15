// #include <stdio.h>
//  #include <stdlib.h>
//  int main() {
//    int tam, l,c,i=0;
// 	int matriz[99][99];
// 	char C;
	
// 	scanf("%i",&tam);
// 	scanf("%s",&C);

// 	for(l=0;l<tam;l++){
// 		for(c=0;c<tam;c++){
		
// 			// FAZER MATRIZ DIAGONAL
// 			if(l==c && C=='D')
// 					printf("1");
// 				else{
// 					if(C=='D'){
// 						printf("0");
// 					}
// 				}
			
// 			// FAZER A TRIANGULAR SUPERIOR
			
// 				if(l<c && C=='S'){
// 					printf("1");
// 				}
// 				if(l==c && C=='S'){
// 					printf("1");
// 				}
// 				if(l>c && C=='S'){
// 					printf("0");
// 				}
					
// 			// FAZER A TRIANGULAR INFERIOR
				
// 				else{
// 					if(l<c && C=='I'){
// 						printf("0");
// 					}
// 					if(l==c && C=='I'){
// 						printf("1");
// 					}
// 					if(l>c && C=='I'){
// 						printf("1");
// 					}
// 				}
// 			//FAZER MATRIZ TABULEIRO
				
// 				if ((l+c)%2==0  && C=='T'){
// 					printf("1");
// 				}
// 				else{
// 					if((l+c)%2==1 && C=='T'){
// 						printf("0");
// 					}
// 				}
// 		}
// 		printf("\n");
// 	}
// return 0;
// }
		
			