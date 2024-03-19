#include<stdio.h>
#include<stdlib.h>
#define N 100



int main(){
  char stack[N];
  int STACK[N];
  int cal1=0,cal2=0,top=0;
  
  while(1){
    if((scanf("%s",stack)) ==EOF) break;
    if(stack[0]==' ') continue;
    else{
      if('0'<=stack[0] && stack[0]<='9'){
	STACK[top++]=atoi(stack);
      }
      
      else if(stack[0]=='+'){
	cal1=STACK[top-2];
	cal2=STACK[top-1];
	top-=2;
	STACK[top++]=cal1+cal2;
      }
      
      else if(stack[0]=='-'){
	cal1=STACK[top-2];
	cal2=STACK[top-1];
	top-=2;
	STACK[top++]=cal1-cal2;
      }
      
      else if(stack[0]=='*'){
	cal1=STACK[top-2];
	cal2=STACK[top-1];
	top-=2;
	STACK[top++]=cal1*cal2;
      }
    }
    
  }
  
  printf("%d\n",STACK[top-1]);
  
  return 0;
}

  

