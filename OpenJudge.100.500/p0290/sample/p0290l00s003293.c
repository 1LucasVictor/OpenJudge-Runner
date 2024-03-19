#include <stdio.h>
int prime(int);
int main(){
  int A[10000];
  int i,n;
  int count=0;

scanf("%d",&n);
for(i=0;i<n;i++){
  scanf("%d",&A[i]);
}
for(i=0;i<n;i++){
if(prime(A[i]))count++;
}
printf("%d\n",count);

return 0;
}


int prime(int A){
  int j;
  if(A<2)return 0;
  if(A==2)return 1;
  if(A%2==0)return 0;
for(j=3;j*j<=A;j+=2){
      if(A%j==0)return 0;
  }
return 1;
 }