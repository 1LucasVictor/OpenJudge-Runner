#include <stdio.h>

int main(int argc,char* argv[]){
  int a,b;
  int num;

  while(scanf("%d %d",&a,&b) != EOF){
    num = gcd(a,b);
    printf("%d %d\n",num,num*(a/num * b/num));
  }
  
  return 0;
}

int gcd(int a,int b){
  if(b == 0){return a;}
  else{
    return gcd(b,a%b);
  }
}