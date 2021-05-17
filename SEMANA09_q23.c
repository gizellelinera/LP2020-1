#include <stdio.h>
#include <stdlib.h>
  int main() {
char carta;
    int jogador1=0, jogador2=0, cont = 0, stop1 = 0, stop2 = 0;

    do{
        //printf("Jogador 1: %d\n", jogador1);
        //printf("Jogador 2: %d\n", jogador2);

        scanf("%c", &carta);
        fflush(stdin);

        if(carta == 'S'){
            if((cont % 2 == 0 && stop1 == 0) || stop2 == 1){
                stop1 = 1;
            } else {
                stop2 = 1;
            }
        }


        if((cont % 2 == 0 && stop1 == 0) || (stop1 == 0 && stop2 == 1)){
            switch(carta){
                case 65: jogador1 += 1; break; //  A
                case 50: jogador1 += 2; break; //  2
                case 51: jogador1 += 3; break; //  3
                case 52: jogador1 += 4; break; //  4
                case 53: jogador1 += 5; break; //  5
                case 54: jogador1 += 6; break; //  6
                case 55: jogador1 += 7; break; //  7
                case 56: jogador1 += 8; break; //  8
                case 57: jogador1 += 9; break; //  9
                case 49: jogador1 += 10; break; // 1 = "10"
                case 74: jogador1 += 11; break; // J
                case 81: jogador1 += 12; break; // Q
                case 75: jogador1 += 13; break; // K
            }
        } else if ((cont % 2 != 0 && stop2 == 0) || (stop1 == 1 && stop2 == 0)){
            switch(carta){
                case 65: jogador2 += 1; break;
                case 50: jogador2 += 2; break; //  2
                case 51: jogador2 += 3; break; //  3
                case 52: jogador2 += 4; break; //  4
                case 53: jogador2 += 5; break; //  5
                case 54: jogador2 += 6; break; //  6
                case 55: jogador2 += 7; break; //  7
                case 56: jogador2 += 8; break; //  8
                case 57: jogador2 += 9; break; //  9
                case 49: jogador2 += 10; break;
                case 74: jogador2 += 11; break;
                case 81: jogador2 += 12; break;
                case 75: jogador2 += 13; break;
            }
        }
        cont++;
    }while(stop1 != 1 || stop2 != 1);

    if((jogador1 == 21 && jogador2 != 21) || (jogador1 <= 21 && jogador2 > 21)) {
        printf("JOGADOR 1 VENCEU\n");
    } else 
	if((jogador2 == 21 && jogador1 != 21) || (jogador2 <= 21 && jogador1 > 21)){
        printf("JOGADOR 2 VENCEU\n");
    } else {
        printf("EMPATE\n");
    }

    return 0;
}