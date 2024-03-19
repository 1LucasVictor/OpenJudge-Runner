
#include<stdio.h>
#include<stdlib.h>


int main(){

  int data[100];
  int x=0;
  char input[5];
  int top = 1;


  while((scanf("%s",input)) != EOF){

    /* x = x + 1;*/

    /* scanf("%s",input);*/

    if(input[0] == '+'){

      data[top - 2] = data[top -2] + data[top -1];

    }

    else if(input[0] == '-'){

      data[top -2] = data[top-2] - data[top -1];

    }

    else if(input[0] =='*'){

      data[top-2] = data[top-2] * data[top -1];

    }

    else if(input[0] == '/'){

      data[top -2] = data[top -2] * data[top - 1];

    }

    else{

      data[top] = atoi(input);

      /*printf("%d\n",data[top]);*/

      top = top + 1;

    }

  }

  printf("%d\n",data[1]);

  return 0;

}