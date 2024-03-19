#include<stdio.h>
#define S 10000
#define T 500
void linearSearch(int s[S],int t);
int n,q;
int count=0;
int main(){
  int i,j,k,ans;
  int s[S],t[T];
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d",&s[i]);
}
  scanf("%d",&q);
  for(j=0;j<q;j++){
    scanf("%d",&t[j]);
  }
  for(k=0;k<q;k++){
  linearSearch(s,t[k]);
  }
  printf("%d\n",count);
  return 0;
}


void linearSearch(int s[S],int t){
  int i=0;
  for(i=0;i<n-1;i++){
  if(s[i]==t){
    count++;
}
  }
}

