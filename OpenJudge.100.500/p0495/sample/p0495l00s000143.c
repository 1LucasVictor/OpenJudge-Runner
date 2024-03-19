#include <stdio.h>
int main(){
	char S[3];
  int j=0,k=0;
  	
  for(int i=0;i<3;i++){
    scanf("%s",S);
    if(S[i]=='A')
      j++;
    else
      k++;
  }
  
  if(j==3 || k==3)
    printf("No");
  else
    printf("Yes");
  

}
  