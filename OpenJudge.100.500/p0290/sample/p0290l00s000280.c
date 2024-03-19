#include<stdio.h>
int isprime(int a);
int main(){
  int a,b,c=0,i;
  scanf("%d",&a);
  for(i=0;i<a;i++){
    scanf("%d",&b);
    c+=isprime(b);
  }
  printf("%d\n",c);
  return 0;
}

int isprime(int a){
  int i=3;
  if(a==2)return 1;
  if(a<2 ||a%2==0)return 0;
  while(i*i<=a){
    if(a%i==0)return 0;
    i+=2;
  }
  return 1;
}


