#include<stdio.h>
#define MAX 10000
#define NOT_FOUND -1
int linearSearch(int );
int n,s[MAX];
int main(){
  int i,q,t[MAX],res;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d",&s[i]);
  }
  scanf("%d",&q);
  for(i=0;i<q;i++){
    scanf("%d",&t[i]);
  }
  
  for(i=0;i<q;i++){
    if(linearSearch(t[i]) == 1)
      res++;
  }
  printf("%d",res);
  return 0;
}
int linearSearch(int a){
  int count =0;
  s[n] = a;
  while(a!=s[count]){
    count++;
    if(count==n)return NOT_FOUND;
  }
	      return 1;
}