#include<stdio.h>
int main(void){
  	int i=0;
 	char S[3]; 
  	
  	scanf("%s",S);
  	if(S[1]=='B')	S[1]='R';
  	else if(S[1]=='R') S[1]='B';
  	while(i<3){
      printf("%c",S[i]);
      i++;
    }
}
