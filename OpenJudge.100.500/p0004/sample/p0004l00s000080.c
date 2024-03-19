#include<stdio.h>

int main(){
  int a,b;
  int tmpa,tmpb;
  int said,sais;
  int i;

while(scanf("%d %d",&a,&b)!=EOF){
  if(a<=b){
    i=a-1;
  }
  else{
    i=b-1;
  }
  while(i>1){
    tmpa=a%i;
    tmpb=b%i;
    if(tmpa==0&&tmpb==0){
              break;
    }
    i=i-1;
  }

  said=i;
  sais=(a/i)*b;

  printf("%d %d\n",said,sais);
}
  return 0;
}