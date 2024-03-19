#include <stdio.h>

int main(){
  char S[100000];
  scanf("%s", S);
  int t = 0;
  int  count=0;
  int i=0;
  int check = 1;
  

    while(check != 0){
      check = 0;
      i = 0;
      t = 0;
    while(S[i+1] != '\0'){
  if(S[i] != S[i+1]){
    count++;
    check = 1;
    t = i;
     while(S[t+2] != '\0'){
      S[t]= S[t+2];
      t++;
    }   
  }
      i++;
  }
   
    if(check == 1)
        check = 1;
      else
        check = 0;
      
      if(S[0] == '\0')
      check = 0;
    }
  
  printf("%d",count*2);
  
return 0;  
}



