#include <stdio.h>

int main(){
  int n,q,C;
  int i,j;
  int count=0,scount=0;

  scanf("%d",&n);
  int S[n];
  for(i=0; i<n; i++){
    scanf("%d",&S[i]);
  }

  //重複を数える
  for(i=n-1; i>0; i--){
    for(j=i-1; j>=0; j--){
      if(/*S[i] &&*/ S[i]==S[j]){
        scount++;
      }
    }
  }

  scanf("%d",&q);
  int T[q];
  for(i=0; i<q; i++){
    scanf("%d",&T[i]);
  }

 //数列Tの中で数列Sに含まれる個数
  for(i=0; i<n; i++){
    for(j=0; j<q; j++){
      if(S[i]==T[j]) count++;
    }
  }

//printf("重複数 %d\n",scount);
//printf("服む個数 %d\n",count);
  printf("%d\n",count-scount);

  return 0;

}

