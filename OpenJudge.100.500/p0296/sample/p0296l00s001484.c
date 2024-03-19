#include<stdio.h>
#include<string.h>
#include<stdlib.h>


int pop();
void push(int x);


int top;
int int_array[110];

int main(){

  char char_array[100];
  int a,b;
  int top;
  while(scanf("%s",char_array)!=EOF){

   
    if(char_array[0]=='+'){
      a=pop();
      b=pop();
      push(a+b);
      
    }
    

    else if(char_array[0]=='-'){

      b=pop();
      a=pop();
      push(a-b);
    }

    else if(char_array[0]=='*'){
      a=pop();
      b=pop();
      push(a*b);
    }

    else{push(atoi(char_array));
    }
  }
  
  printf("%d\n",pop());

  
  
  return 0;
}




int pop(){
  top--;
  return int_array[top+1];

}




void push(int x){
  int_array[++top]=x;
}


