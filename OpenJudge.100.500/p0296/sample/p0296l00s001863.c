#include<stdio.h>
#define N 100
#include<stdlib.h>


main(){
  
  int top=0;
  int t[N];
  char c[200];
  while(scanf("%s",&c)!=EOF){
    
    if(c[0]=='-'){
      t[top-2] = t[top-2] - t[top-1];
      top--;
    }
    else if(c[0]=='+'){
      t[top-2] = t[top-2] + t[top-1];
      top--;
    }
    else if(c[0]=='*'){
      t[top-2] = t[top-2] * t[top-1];
      top--;
    }
    else{
     
      t[top]=atoi(c);
      top++;
    }
    
  
  }
  printf("%d\n",t[top-1]);
  return 0;
  
}