#include<stdio.h>
#define NUM 100

int main(){
  
  char c;
  int i,stack[NUM];

  for(i=0;i<NUM;i++){
    stack[i] = 0;
  }
  
  i = 0;
  
  while((c=getchar())!='\n'){

    if(c>='0' && c<='9')
      stack[i] = 10*stack[i]+(c-'0');

    if(c==' ')
      i++;

    if(c=='+'){
      i--;
      stack[i-1]+=stack[i];
      stack[i]=0;
      i--;
    }
    
    if(c=='-'){
      i--;
      stack[i-1]-=stack[i];
      stack[i]=0;
      i--;
    }

    if(c=='*'){
      i--;
      stack[i-1]*=stack[i];
      stack[i]=0;
      i--;
    }
  }

  printf("%d\n",stack[0]);

  return 0;
}

   
    
