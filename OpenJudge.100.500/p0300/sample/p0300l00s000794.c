#include <stdio.h>

#define MAX 10000
int main(){

  int n,q,s[MAX],t,i,j,count=0;

  //in
  scanf("%d",&n);
  
  for(i=0;i<n;i++)
    scanf("%d",&s[i]);
  
  //in&search
  scanf("%d",&q);
  
  for(i=0;i<q;i++){
    scanf("%d",&t);
    
    for(j=0;j<n;j++){
      if(t==s[j]) count++;
    }
  }
  
  //out
  printf("%d\n",count);
  
  return 0;
}