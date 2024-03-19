#include<stdio.h>
int main(void){
int a;
  scanf("%d",&a);
  int b=a%100;
  int c=a%10;
  if(a/100==7||b/10==7||c==7){
    printf("Yes\n");
  }else{
    printf("No\n");
  }
return 0;
}
