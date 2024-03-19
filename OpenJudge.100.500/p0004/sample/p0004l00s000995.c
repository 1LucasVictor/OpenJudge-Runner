#include<stdio.h>
int f(int a,int b){
  if(b)return f(b,a%b);
  return a;
}
int main(){
  int a,b,c;
  while(scanf("%d %d",&a,&b)!=EOF){
    if(a<b){
      c=a;
      a=b;
      b=c;
    }
    c=f(a,b);
    printf("%d %d\n",c,(a/c)*b);
  }
  return 0;
}