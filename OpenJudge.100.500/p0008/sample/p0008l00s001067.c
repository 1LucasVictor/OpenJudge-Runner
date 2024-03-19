#include<stdio.h>
#define MAX 1000000
int main(){
  char a[MAX]={1,1};
  int i,j,n,x;
 
  for(i=2;i<MAX;i++){
    for(j=2;i*j<MAX;j++)if(!a[i])a[i*j]=1;
  }
  while(scanf("%d",&n)!=EOF){
    x=0;
    for(i=0;i<=n;i++)if(!a[i])x++;
    printf("%d\n",x);
  }
  return 0;
}