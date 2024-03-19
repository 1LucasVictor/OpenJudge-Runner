#include <stdio.h>
#include <stdlib.h>
#include<string.h>
 
int main(){
  int i=0,A[100];
  char stuck[100];
  
 
  while(scanf("%s",stuck)!=EOF){
    if(stuck[0]=='+'){
      A[i-2]=A[i-2]+A[i-1];
      i--;
    }
    else if(stuck[0]=='-'){
      A[i-2]=A[i-2]-A[i-1];
      i--;
    }
    else if(stuck[0]=='*'){
      A[i-2]=A[i-2]*A[i-1];
      i--;
    }
    else{
      A[i]=atoi(stuck);
      i++;
    }
  }
  printf("%d\n",A[i-1]);      
  return 0;
}