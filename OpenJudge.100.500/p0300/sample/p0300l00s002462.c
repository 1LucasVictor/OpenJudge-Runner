#include<stdio.h>

int main(){

  int n,m;
  int i,j,cnt=0;
  int S[10000],T[500];
  
  scanf("%d",&n);

  //int S[n];

  for(i=0;i<n;i++){
    scanf("%d",&S[i]);
  }

  scanf("%d",&m);

  //int T[m];

  for(i=0;i<m;i++){
    scanf("%d",&T[i]);
  }

  for(i=0;i<m;i++){
    for(j=0;j<n;j++){
      if(T[i]==S[j]){
	cnt++;
	continue;
      }
    }
  }

  printf("%d\n",cnt);
  
  return 0;
}

