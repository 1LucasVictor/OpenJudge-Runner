#include <stdio.h>
int linearSearch(int ,int *);
int C=0,n;

int main(){
  int i,q;
  
  scanf("%d",&n);
  int S[n];
  for(i=0;i<n;i++){
    scanf("%d",&S[i]);
  }
 
  scanf("%d",&q);
  int T[q];
  for(i=0;i<q;i++){
    scanf("%d",&T[i]);
    linearSearch(T[i],&S[0]);
  }
 
  printf("%d\n",C);
  return 0;
}

int linearSearch(int x, int *a){
  int i=0;
  while(a[i]!=x){
    if(i>n)
      return 0;
    i++;
  }
  C++;
  return 0;
}
