#include<stdio.h>

int main(){
  int n,m,i;
  int a[100000];
  int b[10000];
  scanf("%d",&n);
  for(i=0;i<n-1;i++){
    scanf("%d",&a[i]);
    b[a[i]-1]++;
  }
  
 for(i=0;i<n;i++){
   printf("%d\n",b[i]);
 }
}