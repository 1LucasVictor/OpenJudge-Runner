#include<stdio.h>

int main(){
  int n,num;
  long long int i,j;
  int p[1000001];

  num = 0;
  p[1] = 0;
  for(i = 2;i<=1000000;i++){
   for(j = 2;j*j<=i;j++){
     if(!(i%j))break;
   }
   if(j*j>i)num++;
   p[i] = num;
  }
  while(scanf("%d",&n)!=EOF){
    printf("%d\n",p[n]);
  }
}