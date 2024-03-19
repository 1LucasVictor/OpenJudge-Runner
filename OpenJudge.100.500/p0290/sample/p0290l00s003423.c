#include<stdio.h>

main(){
  int a,b,c,i,j,k=0,d=0;

  scanf("%d",&a);
  for(i=0;i<a;i++){
    scanf("%d",&b);
    for(j=2;j<b;j++){
      c=b%j;
      if(c==0) d++;
    }

    if(d==0) k++;
    d=0;
  }

  printf("%d\n",k);
  return 0;
}