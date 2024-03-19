#include<stdio.h>
int main()
{
  int i,k,a,b,c;
  scanf("%d %d %d",&k,&a,&b);
  for(i = 0;i < b;i++){
    c= k*a;
  }
  if(c%2 == 0){
   printf("OK\n"); 
  }
  else
  printf("NG\n");
}