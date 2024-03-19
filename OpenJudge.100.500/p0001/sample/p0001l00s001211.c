#include<stdio.h>
int main()
{
  int a,b,total,i;

  while(scanf("%d%d",&a,&b)!=EOF){

    total=a+b;

    if(total<10){
      printf("1\n");
    }
    
    else if(total<100){
      printf("2\n");
    }
    
    else if(total<1000){
      printf("3\n");
    }

    else if(total<10000){
      printf("4\n");
    }

    else if(total<100000){
      printf("5\n");
    }

    else if(total<1000000){
      printf("6\n");
    }

    else if(total<=1000000){
      printf("7\n");
    }
  }
    return 0;
    
  }