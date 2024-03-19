#include<stdio.h>
int small(int,int);
int large(int,int);
int main (){
  int a,b,c;
  scanf("%d%d",&a,&b);
  if(b > a){
    c=a;
    a=b;
    b=c;
  }
  while(1){
    if(a%b==0)break;
    c=b;
    b=a%b;
    a=c;
  }
  printf("%d\n",b);
    
  return 0;
}

