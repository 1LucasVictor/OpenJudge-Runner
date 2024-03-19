#include<stdio.h>
int f(int a,int b){
  if(b==0)return a;
  return f(b,a%b);
}
int main(){
  int a,b,g;
  while(scanf("%d %d",&a,&b)!=EOF){
    if(a<b)g=f(b,a);
    else   g=f(a,b);
    printf("%d ",g);
    b/=g;
    printf("%d\n",a*b);
  }
  return 0;
}