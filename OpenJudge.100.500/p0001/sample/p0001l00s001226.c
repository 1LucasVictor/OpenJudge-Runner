#include<stdio.h>

main(){
  int a,b,c,ans=0;
  while(ans<3){
    c=1;
    scanf("%d %d",&a,&b);
    a=a+b;
    while(a>=10){
      a=a/10;
      c=c+1;
    }
    printf("%d\n",c);
    ans++;
  }
  return(0);
}