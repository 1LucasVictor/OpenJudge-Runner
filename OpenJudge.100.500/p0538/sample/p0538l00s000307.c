#include<stdio.h>
#include<math.h>

main(){
  int a,b;
  scanf("%d%d",&a,&b);
  
  if(a>9 || b>9){
    printf("-1");
  }
  else{
    printf("%d",a*b);
  }
}