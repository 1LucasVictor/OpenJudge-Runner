#include<stdio.h>
int search(int A[],int i,int j){
int k=0;
A[i]=j;
while(A[k]!=j)
k++;
return k!=i;
}

int main(void){
int i,j,k,l,A[100001],sum;
scanf("%d",&i);
for(j=0;j<i;j++)
scanf("%d",&A[j]);
scanf("%d",&k);
for(j=0;j<k;j++){
scanf("%d",&l);
if(search(A,i,k))
sum++;
}
printf("%d\n",sum);

return 0;
}