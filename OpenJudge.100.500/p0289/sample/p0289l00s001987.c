#include<stdio.h>
int main()
{
  int a,b,i,num,Max;

  scanf("%d%d",&a,&b);
  
  if(a > b) num = b;
  else num = a;

for(i=2; i<=num; i++){
    if(a%i==0 && b%i==0){
        Max=i;
        break;
    }
}
  printf("%d\n",Max);
}

