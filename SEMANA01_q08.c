#include <stdio.h>
int main() {

float x, y;


scanf("%f %f", &x, &y);

	if(x-11>58 && x+11<98 && y-11 >204 && y+11 <244) { //gol no angulo esquerdo
			printf("GOLACO\n");
	}else{
		if(x+11>750 && x-11<790 && y-11 >204 && y+11 <244 ){  //gol no angulo direiro
			printf("GOLACO\n");
		}else{
			if(x-11>58 && x+11<98 && y+11<204 ){ // gol canto esquerdo
				printf("GOL\n");
			}else{
				if(x+11>750 &&x-11<790 && y-11<204){  // gol canto direito
					printf("GOL\n");
				}else{
					if(x-11>98 && x+11<750 && y-11>0 && y+11<244){ // gol no centro
						printf("GOL\n");
					}else{
		
						printf("UHH\n");
		
				}
			}
		
		}
	} 
}

  return 0;
}