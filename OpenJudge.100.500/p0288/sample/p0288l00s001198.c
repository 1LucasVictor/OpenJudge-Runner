#include<stdio.h>
#define N 1000
int main(){
int i,j,k,n,v,A[N];

scanf("%d",&n);
for(i=0;i<n;i++){
  scanf("%d",&A[i]);
}

for(i=0;i<n;i++){
  v = A[i];
  j = i-1;
  while(j>=0 && A[j] > v){
    A[j+1] = A[j];
    j--;
  }
  A[j+1] = v;
  for(k=0;k<n;k++){
    if(k!=n-1) printf("%d ",A[k]);
    else printf("%d\n",A[k]);
  }
}
return 0;
}

