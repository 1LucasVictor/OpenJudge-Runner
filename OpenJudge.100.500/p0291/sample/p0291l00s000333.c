#include <stdio.h>
#include <stdlib.h>
#define N_MAX 200000
#define RT_MAX 1000000000

int main(){
  int i,j,n,R[N_MAX],max=-RT_MAX,db;
  scanf("%d",&n);
  if(n>N_MAX || n<2)exit(8);
  for(i=0;i<n;i++){
    scanf("%d",&R[i]);
    if(R[i]>RT_MAX || R[i]<1)exit(8);
  }
  for(i=n-1;i>0;i--){
    for(j=i-1;j>=0;j--){
      db=R[i]-R[j];
      if(db>max)max=db;
    }
  }
  printf("%d\n",max);
  return 0;
}

