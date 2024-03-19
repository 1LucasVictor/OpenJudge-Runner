#include<stdio.h>
#include<limits.h>
#define MAX 200000

int main(){
 int n,i;
 int A[MAX];
 int max=-1;
 int Midx;
 int min=INT_MAX;

 scanf("%d",&n);

 for(i=0;i<n;i++){
   scanf("%d",&A[i]);
   if(i>0 && A[i] > max){
     max=A[i];
     Midx=i;
   }
 }

 for(i=0;i<n-1;i++){
  if(i!=Midx && A[i] <= min)min=A[i];
 }

 printf("%d\n",max-min);

return 0;
}
