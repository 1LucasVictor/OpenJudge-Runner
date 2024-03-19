#include <stdio.h>
int GCD(int,int);
int main(){
  int x, y;
  int gcd, c;
  scanf("%d%d",&x,&y);
  if(x>=y){
    c=x%y;
    gcd=GCD(y,c);
  }
  else 
    gcd=GCD(x,y);
  printf("%d\n",gcd);
  return 0;
}
int GCD(int p,int q){
  int s,tmp;
  if(p<q){
    tmp=p;
    p=q;
    q=tmp;
  }
  s=p%q;
  while(s!=0){
    p=q;
    q=s;
    s=p%q;
  }
  return q;
}

