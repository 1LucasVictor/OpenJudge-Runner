#include <stdio.h>

int search(int *, int ,int );

int main(){

int i,n,q,A[10000],key,sum=0;

scanf("%d",&n);
for(i=0;i<n;i++){
  scanf("%d",&A[i]);
  }

scanf("%d",&q);
for(i=0;i<q;i++){
  scanf("%d",&key);
  if(A[search(A,n,key)] == key) sum++;
  }
  printf("%d\n",sum);

return 0;
}

int search(int A[],int n,int key){
int i,sum=0;

for(i=0;i<n;i++){
  if(A[i] == key) return i;
}
}