#include<stdio.h>

int main(){
  int n,a=0;
  scanf("%d",&n);
  if(n%2==0){
    a=n/2;
}
else{
  a=n/2;
  a+=1;
}
printf("%d",a);
return 0;
}