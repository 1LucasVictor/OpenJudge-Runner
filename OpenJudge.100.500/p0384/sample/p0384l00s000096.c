#include <stdio.h>

int main(){
  char c[1201],i=0,j;
   while(1){
    scanf("%c",&c[i]);
    if(c[i]=='\n'){
      break;
    }
    i++;
   }
  for(j=0; j<i; j++){
    if(c[j]>='A'&&c[j]<='Z')c[j]+=32;
    else if(c[j]>='a'&&c[j]<='z')c[j]-=32;
    printf("%c",c[j]);
    if(j==i-1)printf("\n");
  }
  return 0;
}