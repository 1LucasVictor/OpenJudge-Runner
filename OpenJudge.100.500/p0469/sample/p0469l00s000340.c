#include<stdio.h>

int main(void){

int  k,a,b;

scanf("%d",&k);scanf("%d",&a);scanf("%d",&b);

if(k==1){
  printf("OK");
}else if(a%k==0||b%k==0){
  printf("OK");
}else if(a/k==b/k){
printf("NG");
}else{
printf("OK");
}

return 0;
}