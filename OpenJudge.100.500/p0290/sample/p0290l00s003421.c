#include <stdio.h>
void prime(int [],int);
int main(){
  int A[10000];
  int i,n;

scanf("%d",&n);
for(i=0;i<n;i++){
  scanf("%d",&A[i]);
}
prime(A,n);

return 0;
}

void prime(int A[],int n){
  int j,i;
  int count=0,number=0;
for(i=0;i<n;i++){
  for(j=1;j<=A[i];j++){
    if(A[i]%j==0)count++;
  }
if(count==2)number++;
count=0;
 }
printf("%d\n",number);
}