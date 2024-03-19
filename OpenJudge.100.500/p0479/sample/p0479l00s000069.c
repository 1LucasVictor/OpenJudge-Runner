#include<stdio.h>
int main(){
  int n,A[100000],a[100000];
  scanf("%d",&n);
  for(int i=1;i<n;i++){
    scanf("%d",&A[i]);
    a[i]=0;
  }
  
  for(int i=1;i<n;i++){
    for(int j=1;j<=i;j++){
      if(A[i]==j)
	a[j]++;
    }
  }
  for(int x=1;x<=n;x++){
    printf("%d\n",a[x]);
  }
}