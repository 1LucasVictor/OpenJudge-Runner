#include<stdio.h>
int main(){
  int i,a,b,c,d;
  scanf("%d%d",&a,&b);
  if(a>b){
    d=a%b;
    for(i=0;d!=0;i++){
      a=b;
      b=d;
      d = a%b;
    }
    printf("%d",b);
  }
   else if(a<b){
     d=b%a;
     for(i=0;d!=0;i++){
      b=a;
      a=d;
      c = a%d;
    }
    printf("%d",a);
}
  printf("\n");
  return 0;
}

