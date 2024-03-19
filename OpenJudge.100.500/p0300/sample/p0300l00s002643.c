#include<stdio.h>
#define N 10000
#define Q 500

int main(){

  int i,j,x,y;
  int s[N],t[Q],a=0;

  scanf("%d",&x);

  for(i=0;i<x;i++){
    scanf("%d",&s[i]);
  }

  scanf("%d",&y);

  for(j=0;j<y;j++){
    scanf("%d",&t[j]);
  }

  for(i=0;i<x;i++){
    for(j=0;j<y;j++){
      if(s[i]==t[j]){
	a++;
      break;
      }
    }
  }
  printf("%d\n",a);
  return 0;
}