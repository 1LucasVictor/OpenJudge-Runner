#include<stdio.h>
int F[50];
int fibonacci(int n){
if(n==0 || n==1) return F[n]=1;
if(F[n]!=-1) return F[n];
else return F[n]=fibonacci(n-1)+fibonacci(n-2);
}
void makefc(){
  int i;
for(i=0;i<50;i++)F[i]=-1;
}
int main(){
  int i,n;
  makefc();
  scanf("%d",&n);
  printf("%d\n",fibonacci(n));
  return 0;
}

