#include<stdio.h>
main(){
  long long a,b,i,x,y,temp;
  while(scanf("%lld %lld",&a,&b)!=EOF){
    x=a;
    y=b;
    if(x<y){
      temp=x;
      x=y;
      y=temp;
    }
    while(y!=0){
      temp=y;
      y=x%y;
      x=temp;
    }
    printf("%lld %lld\n",x,a*b/x);
  }
  return 0;
}