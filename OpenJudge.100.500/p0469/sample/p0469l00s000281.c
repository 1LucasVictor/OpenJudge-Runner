#include <stdio.h>
int main(void){
  int a,b,k;//下、上、倍数
  int i=0;
  int c=0;//7の倍数
  scanf("%d",&k);
  scanf("%d %d",&a,&b);
for(i=1;c<a;++i){
  c=k*i;
}
  if(c<=b){
    printf("OK\n");
  }else{
    printf("NG\n");
  }
return 0;
}
