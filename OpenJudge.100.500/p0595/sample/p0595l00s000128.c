#include<stdio.h>

int main()
{
  int a,b,c,i,x=0,cnt=0;
  scanf("%d",&a);
  scanf("%d",&b);
  scanf("%d",&c);

  for(i=100;i>=1;i--){
    if( (a%i == 0) && (b%i == 0) ){
      cnt++;
      x=i;
    }
    if(cnt==c){
      printf("%d",x );
    }
  }
  return 0;
}