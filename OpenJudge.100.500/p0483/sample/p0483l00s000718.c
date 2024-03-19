#include<stdio.h>

int main(){
  int n,n1,n2,n3;
  scanf("%d",&n);
  
  n1=n%10;
  n=n/10;
  n2=n%10;
  n=n/10;
  n3=n;
  if(n1==7 || n2==7 || n3==7){
    printf("Yes");
  }else{
    printf("No");
  }
}