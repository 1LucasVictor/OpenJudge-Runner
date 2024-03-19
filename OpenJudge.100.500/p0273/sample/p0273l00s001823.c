#include <stdio.h>
#define MAX 50
int A[MAX];

int naci(int n){
  if(n==0||n==1)return A[n]=1;
  if(A[n]!=-1)return A[n];
  return A[n]=naci(n-1)+naci(n-2);
}

int main(){
  int n,i;
  for(i=0;i<MAX;i++) A[i]=-1;
  scanf("%d",&n);
printf("%d\n",naci(n));

return 0;  
}
