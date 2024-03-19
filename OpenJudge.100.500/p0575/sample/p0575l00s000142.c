#include<stdio.h>
#define N 100

int main(){
int n,x,l[N];
  int i,j,cnt;
  
  scanf("%d%d",&n,&x);
  for(i=0;i<3;i++){
    scanf("%d",l[i]);
  }
  
  for(j=0;j<n;j++){
    if(l[j]<=x) cnt++;
  }
  
  printf("%d",cnt);


return 0;
}