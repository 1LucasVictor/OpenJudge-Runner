#include<stdio.h>
#define MAX 5000

int max(int a,int b){
 if(a > b)return a;
 return b;
}

int GetSum(int A[],int start,int last){
 int i;
 int sum=0;

 for(i=start;i<=last;i++)
  sum+=A[i];

return sum;

}




int main(){

 int n,i,j;
 int A[MAX];
 int sum;
 int maxi;
 while(1){

  scanf("%d",&n);
  if(n==0)break;
  maxi=-100000000;

  for(i=0;i<n;i++){
    scanf("%d",&A[i]);

    for(j=0;j<=i;j++){
      sum=GetSum(A,j,i);
      maxi=max(sum,maxi);
    }

  }

  printf("%d\n",maxi);

 }

return 0;
}
