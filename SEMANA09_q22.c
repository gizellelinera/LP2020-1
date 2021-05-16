#include <stdio.h>
#include <stdlib.h>
  int main() {
    char mimimi[50];
		int i=0;
		
		gets(mimimi);
		while(mimimi[i]!='\0'){
		
		
		if(mimimi[i]=='a' || mimimi[i]=='e' || mimimi[i]=='o' || mimimi[i]=='u'){
			mimimi[i]='i';
		}
		if(mimimi[i]==','){
			mimimi[i]==',';
		}
		else{
			if(mimimi[i]=='A' || mimimi[i]=='E' || mimimi[i]=='O' || mimimi[i]=='U'){
			mimimi[i]='I';
			if(mimimi[i]==','){
				mimimi[i]==',';
			}
		}
	}
		i++;
		}
			printf("%s",mimimi);
			
		


	return 0;
}