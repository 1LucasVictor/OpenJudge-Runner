
#include<stdio.h>

int main(){

  int n,q;
  int i,j;
  int s[10000],t[10000],c=0;

  scanf("%d",&n);

  for(i=0; i < n; i++){
    scanf("%d",&s[i]);
  }

  scanf("%d",&q);

  for(j=0; j < q; j++){
    scanf("%d",&t[j]);
  }

  for(i=0; i < n; i++){
    for(j=0; j < q; j++){
      if(s[i]==t[j]){
	c++;
      }
    }
  }

  printf("%d\n",c);

  return 0;
}