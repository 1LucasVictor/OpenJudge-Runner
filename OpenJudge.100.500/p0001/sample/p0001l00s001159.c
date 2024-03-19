#include<stdio.h>

main(){
  int a,b,c,math=0;
  while(math<3){
    c=1;
    scanf("%d %d",&a,&b);
    a=a+b;
    while(a>=10){
      a=a/10;
      c=c+1;
    }
    printf("%d\n",c);
    math++;
  }
  return(0);
}