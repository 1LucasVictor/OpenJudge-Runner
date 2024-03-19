#include<stdio.h>
#include<stdlib.h>
int sort(int *,int *);
int main(void){
  int n;
  scanf("%d",&n);
  int a[n+1];
  for(int i=0;i<n;i++){
scanf("%d",&a[i]);
  }
qsort(a,n,sizeof(int),sort);
  
  for(int i=0;i<n-1;i++){
    if(a[i]==a[i+1]){
      printf("NO");
      return 0;
    }
         }
         printf("YES");
         return 0;
         }
int sort(int *a, int *b){
  return *a-*b;
}