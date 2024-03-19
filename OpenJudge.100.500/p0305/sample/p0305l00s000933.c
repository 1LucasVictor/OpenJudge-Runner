#include <stdio.h>
#define N 100000000
void mg(int,int,int);
void ms(int,int);
int A[N];
int L[N];
int R[N];
int n,count=0;
int main(){
  int i;
  int l,m,r;
  scanf("%d",&n);
  for(i=0;i<n;i++) scanf("%d",&A[i]);
  ms(0,n);

  for(i=0;i<n;i++){
    printf("%d",A[i]);
    if(i<n-1)printf(" ");
    else printf("\n");
  }
  printf("%d\n",count);
  return 0;
}

void ms(left,right){
  int mid;
  if(left+1<right){
    mid=(left+right)/2;
    ms(left,mid);
    ms(mid,right);
    mg(left,mid,right);
  }

}
void mg(left,mid,right){
  int n1,n2;
  int i,j,k;
  n1=mid-left;
  n2=right-mid;
  for(i=0;i<n1;i++) L[i]=A[left+i];
  for(i=0;i<n2;i++) R[i]=A[mid+i];
  L[n1]=10000000;
  R[n2]=10000000;
  i=0;
  j=0;
  for(k=left;k<right;k++){
    if(L[i]<=R[j]){
      A[k]=L[i];
      i=i+1;
    }
    else{
      A[k]=R[j];
      j=j+1;
    }
    count++;
  }


}