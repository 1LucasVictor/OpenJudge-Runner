#include<stdio.h>
#include<string.h>
int f(int a,int b){
  if(b==0)return a;
  return f(b,a%b);
}
int main(){
  int a,b,c,t;
  while(scanf("%d %d",&a,&b)!=EOF){
    if(a<b){
      t=a;
      a=b;
      b=t;
    }
    c=f(a,b);
    printf("%d %d\n",c,(a/c)*b);
  }
  return 0;
}
    