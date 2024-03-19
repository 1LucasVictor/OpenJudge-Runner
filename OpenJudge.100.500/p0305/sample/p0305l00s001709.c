#include <stdio.h>
#include <stdlib.h>
#define N 1000000000

int c=0;

void m(int A[], int l,int mid,int r){
  int i,j,k,x,y,*L,*R;

  x=mid-l;
  y=r-mid;
  L=(int *)malloc(sizeof(int)*(x+1));
  R=(int *)malloc(sizeof(int)*(y+1));
  for(i=0;i<x;i++){
    L[i]=A[l+i];
  }
  for(j=0;j<y;j++){
    R[j]=A[mid+j];
  }
  L[x]=N;
  R[y]=N;
  i=0;
  j=0;
  for(k=l;k<r;k++){
    if(L[i]<=R[j]){
      A[k]=L[i];
      i++;
      c++;
    }
    else{
      A[k]=R[j];
      j++;
      c++;
    }
  }
  free(L);
  free(R);
}

  void ms(int A[],int l,int r){
    int i,mid;
    if(l+1<r){
      mid=(l+r)/2;
      ms(A,l,mid);
      ms(A,mid,r);
      m(A,l,mid,r);
    }
  }

  int main(){
    int C[50000];
    int i,n;

    scanf("%d",&n);
    for(i=0;i<n;i++){
      scanf("%d",&C[i]);
    }
    ms(C,0,n);
    for(i=0;i<n;i++){
      printf("%d",C[i]);;
      if(i<n-1){
	printf(" ");
      }
    }
    printf("\n");
    printf("%d\n",c);
    return 0;
  }

