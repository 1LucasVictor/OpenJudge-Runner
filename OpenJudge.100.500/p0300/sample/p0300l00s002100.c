#include <stdio.h>
#define N 10000
#define M 500

int main(){
  int n,q,key;
  int s[N],t[M];
  int i,j,count=0,found=1;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d",&s[i]);
  }
  scanf("%d", &q);
  for(i=0;i<q;i++){
    scanf("%d",&t[i]);
  }
  for(i=0;i<q;i++){
    j=0;
    key=t[i];
    while(s[j]!=key){
      j++;
      if(j==n){
	found=0;
	break;
      }
    }
    if(found==1){
      count++;
    }
  }
  printf("%d\n",count);
  return 0;
}