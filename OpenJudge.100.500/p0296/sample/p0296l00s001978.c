
#include<stdio.h>

int main(void){
  char str[500];
  char c;
  int stack[100];
  int count=0;
  int reset=0;
  int x,y;
  // fgets(str,500,stdin);
  //printf("%s",str);
  while((c=getchar())!='\n'){
    //printf("%c ",c);
    if(c=='+'){
      //printf("test:+\n");
      y=stack[count-1];
      x=stack[count-2];
      stack[count-2]=x+y;
      count--;
    }else if(c=='*'){
      //printf("test:*\n");
      y=stack[count-1];
      x=stack[count-2];
      stack[count-2]=x*y;
      count--;
    }else if(c=='/'){
      // printf("test:/\n");
      y=stack[count-1];
      x=stack[count-2];
      stack[count-2]=x/y;
      count--;
    }else if(c=='-'){
      // printf("test:-\n");
      y=stack[count-1];
      x=stack[count-2];
      stack[count-2]=x-y;
      count--; 
    }else if(c==' '){
      //printf("test: \n");
      //スルー
      reset=0;
    }else{
      //printf("test:123\n");
      x=(int)(c-'0');
      if(reset==1){
	stack[count-1]=(stack[count-1]*10)+x;
      }else{
	stack[count]=x;
	//printf("%d\n",stack[count]);
	count++;
      }
      reset=1;
    }
    
  }
  printf("%d\n",stack[0]);
  return 0;
}

