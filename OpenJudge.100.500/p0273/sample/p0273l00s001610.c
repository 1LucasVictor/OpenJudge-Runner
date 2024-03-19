#include<stdio.h>
#include<stdlib.h>
int fibonacci(int,int*);

int main(){
  int n,i=0;
  int *num;
  scanf("%d",&n);

  num=malloc(sizeof(int)*(n+1));
  
  while(i!=n+1) num[i++]=0;
  
  printf("%d\n",fibonacci(n,num));
 
  return 0;

}

int fibonacci(int n,int *num){

  if(n==0 || n==1){ 
    num[n]=1;
    return 1; 
  }
  
  if(num[n]!=0) return num[n];

  return num[n]=fibonacci(n-2,num)+fibonacci(n-1,num);
}