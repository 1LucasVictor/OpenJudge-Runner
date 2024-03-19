#include<stdio.h>
int main(void){
  int a,b,c,n,i;

  scanf("%d",&n);
  for(i=1;i<=n;i++){
    scanf("%d %d %d",&a,&b,&c);
    a*=a; b*=b; c*=c;
    if(a+b==c || b+c==a || c+a==b)
      printf("YES\n");
    else
      printf("NO\n");
  }
}