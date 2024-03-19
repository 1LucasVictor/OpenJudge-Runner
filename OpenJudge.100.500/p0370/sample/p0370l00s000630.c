#include<stdio.h>
int main(){
  int a,b;
  char op;
  scanf("%d %c %d",&a,&op,&b);

  while(1){
    if(op=='?'){
      break;
    }

  else if(op=='+'){

    printf("%d\n",a+b);

  }else if(op=='-'){

    printf("%d\n",a-b);

  }else if(op=='*'){

    printf("%d\n",a*b);

  }else if (op=='/' ){

    printf("%d\n",a/b);

    }

  else{
    printf("Erroe\n");

  }

    scanf("%d %c %d",&a,&op,&b);
    
  }
  
      return 0;
}