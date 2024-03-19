#include<stdio.h>

int main(void){
  int n,num=0,i,j;
  int p[1000001];

  for(i = 2;i<=1000000;i++){
     p[i]=0;
       for(j = 2;j*j<=i;j++){
         if(!(i%j))break;
   }
   if(j*j>i)num++;
   p[i] = num;
  }
  while(scanf("%d",&n)!=EOF){
    printf("%d\n",p[n]);
  }

return (0);
}

