#include<stdio.h>
#include<string.h>

int main(void){
   int i;
   char S[11];//10
   char T[12];//11

  scanf("%s",S);
  scanf("%s",T);
  
  int lenS = strlen(S);
  int lenT=strlen(T);

  for(i=0;S[i]!='\0';i++){
     if(S[i]!=T[i]){
        printf("No\n");
        return 0;
     }
  }
  if(T[i+1]=='\0'){
     printf("Yes\n");
  }else{
     printf("No\n");
     return 0;
}
}