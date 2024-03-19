#include<stdio.h>
#include<math.h>
#define N 10000
int primenum(int);
int main(){
  int a[N],b,i,num=0;
  scanf("%d",&b);
  for(i=0;i<b;i++){
    scanf("%d\n",&a[i]);
  }
  for(i=0;i<b;i++){
    if(primenum(a[i]))
      num++;
  }
  printf("%d\n",num);
  return 0;
}

int primenum(int c){
  int j;
  if(c==2)return 1;
  if(c%2==0 || c<2)return 0;
  j=3;
  while(j<=(int)sqrt(c)){
    if(c%j==0)return 0;
    j+=2;
  }
  return 1;
}