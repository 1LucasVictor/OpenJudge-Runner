#include<stdio.h>
int main(void){
  int a,b,c,d,ti=0;
  scanf("%d %d %d %d",&a,&b,&c,&d);
  if(a<c){
    if(b<d){
      ti = b -c;
    }else{
      ti = d - c;
    }
  }else{
    if(b<d){
    ti = b - a;
  }else{
    ti = d - a;
    }
  }
  if(ti<=0){
    printf("0");
  }else{
    printf("%d",ti);
  }
  return 0;
}
