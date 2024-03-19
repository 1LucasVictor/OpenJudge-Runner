#include<stdio.h>
int main(){
  int n,E,i,s;
  int a[5][53];
  char e;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%s %d",&e,&s);
    if(e=='S') E=0;
    else if(e=='H') E=1;
    else if(e=='C') E=2;
    else if(e=='D') E=3;
    a[E][s]=1;
  }
  for(i=1;i<=13;i++){
    if(a[0][i]!=1) printf("S %d\n",i);
  }

  for(i=1;i<=13;i++){
    if(a[1][i]!=1) printf("H %d\n",i);
  }
  for(i=1;i<=13;i++){
    if(a[2][i]!=1) printf("C %d\n",i);
  }
  for(i=1;i<=13;i++){
    if(a[3][i]!=1) printf("D %d\n",i);
  }
  return 0;
}