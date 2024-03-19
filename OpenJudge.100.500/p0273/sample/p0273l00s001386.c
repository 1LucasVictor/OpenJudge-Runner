#include<stdio.h>

#define N 44

int Fibo(int );

int main(){
  
  int number;
  int result;

  scanf("%d",&number);
  
  result=Fibo(number);

  printf("%d\n",result);
  
  return 0;
}

int Fibo(int number){
  int Nacci[N];
  int i;

  Nacci[0]=1;
  Nacci[1]=1;

  for(i=2;i<number+1;i++){
    Nacci[i]=Nacci[i-2]+Nacci[i-1];
  }

  return Nacci[number];
}

