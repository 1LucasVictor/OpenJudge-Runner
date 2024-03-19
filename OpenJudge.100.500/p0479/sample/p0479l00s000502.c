#include<stdio.h>
 int main(void){
 int n,a[200000],b[200000]={0},ans[200000]={0};
   scanf("%d",&n);
   for(int i=1;i<n;i++){
   b[i]+=i; 
    for(int j=0;j<n-1;j++){
       scanf("%d",&a[j]);
       if(b[i]==a[j]){
     ans[i]++;
      }
     }
   }
   for(int i=1;i<n+1;i++){
     printf("%d\n",ans[i]);
   }
     return 0;
   }   