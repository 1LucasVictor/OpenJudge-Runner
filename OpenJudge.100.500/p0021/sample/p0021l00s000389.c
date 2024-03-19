#include<stdio.h>
#define MAX 5000

int main(){

 int n,i,j;
 int A[MAX];
 int MaxEndingHere;
 int MaxSoFar;

 while(1){

  scanf("%d",&n);
  if(n==0)break;
  MaxEndingHere=0;
  MaxSoFar=-10000000;


  for(i=0;i<n;i++){
    scanf("%d",&A[i]);

    MaxEndingHere+=A[i];
    if(MaxEndingHere > MaxSoFar)MaxSoFar=MaxEndingHere;
    if(MaxEndingHere < 0)MaxEndingHere=0;


  }

  printf("%d\n",MaxSoFar);

 }

return 0;
}
