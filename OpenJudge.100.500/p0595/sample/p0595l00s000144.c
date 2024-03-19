#include<stdio.h>
int gcd(int a,int b){return b?gcd(b,a%b):a;}
int main(){
  int a,b,c,i;
  scanf("%d %d %d",&a,&b,&c);
  if(c==1){
    printf("1\n");
    return 0;
  }
  for(i=1;c-1;i++){
    if(a%i==0&&b%i==0)c--;
  }
  printf("%d\n",i);
  return 0;
}
