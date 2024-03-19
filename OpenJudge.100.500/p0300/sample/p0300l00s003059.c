#include<stdio.h>

int check(int,int);

int main(){
  
  int n,q,i,j,S[10000],T[500],C=0;

  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d",&S[i]);
  }
  scanf("%d",&q);
  for(j=0;j<q;j++){
    scanf("%d",&T[j]);
  }  
  for(i=0;i<n;i++){
    for(j=0;j<q;j++){
      if(S[i]==T[j]){
	if(check(S[i],i)==0)
	  C++;
      }
    }}
  printf("%d\n",C);

  return 0;  
}


int check(int s,int n){

  int i,j,stac[500];
  for(i=0;i<n;i++){
    if(s==stac[i])
      return 1;
  }
      stac[j]=s;
      j++;
      return 0;
}