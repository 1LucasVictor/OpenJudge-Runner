#include <stdio.h>

int main(){
  int i,n,q,cnt=0;
  
  scanf("%d", &n);
  int S[n];
  //input data
  for(i=0;i<n;i++){
    scanf(" %d", &S[i]);
  }

  scanf("%d", &q);
  int T[q];
  //input data
  for(i=0;i<q;i++){
    scanf(" %d", &T[i]);
  }

  /* Linear Search
  */
  int j;
  for(i=0;i<q;i++){
    int key = T[i]; //??????????????¢?´¢
    for(j=0;j<n;j++){
      if(S[j]==key){  //found!
        cnt++;
      }
    }
  }
  
  printf("%d\n",cnt);

  return 0;
}