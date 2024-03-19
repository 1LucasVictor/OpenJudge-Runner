#include<stdio.h>
int main(void){
  int a,b,c,k,i,d;
  scanf("%d %d %d %d",&a,&b,&c,&k);
  if(a>=k){
    printf("%d\n",k);
  }else if(a<k&&a+b>=k){
    printf("%d\n",a);
  }else{
    printf("%d\n",a-(k-a-b));
  }
  return 0;
}
