#include<stdio.h>

int main(){
 int i,j,k;

 while(scanf("%d %d",&i,&j)!=EOF){
  i+=j;
  for(k=i,j=1;k>=10;j++,k/=10)
   ;
  printf("%d\n",j);
 }
 return 0;
}