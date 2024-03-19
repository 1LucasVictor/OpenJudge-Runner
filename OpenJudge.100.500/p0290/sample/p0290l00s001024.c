#include<stdio.h>
int main(){
  int n,i,prime=0,count=0,j;
  scanf("%d",&n);
  int A[n];
  for(i=0;i<n;i++){
    scanf("%d",&A[i]);
  }
  for(i=0;i<n;i++){
    for(j=2;j<=(A[i]/2);j++){
      if((A[i]%j)==0){
        count++;
      }
    }
    if(count==0){
      prime++;
    }
    count=0;
  }
  printf("%d\n",prime);
  return 0;
}
