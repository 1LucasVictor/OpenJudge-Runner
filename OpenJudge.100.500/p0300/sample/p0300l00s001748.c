#include<stdio.h>

int LinearSearch(int *,int *);
int n,q;

int main(){
  int C[10000];
  int T[500];
  int i,j,a;

  scanf("%d",&n);
  i=0;
  for(i=0;i<n;i++){
    scanf("%d ",&C[i]);
  }
  scanf("%d",&q);
  for(j=0;j<q;j++){
    scanf("%d",&T[j]);
  }

  a=LinearSearch(&C[0],&T[0]);
 
  printf("%d\n",a);

  return 0;
}

int LinearSearch(int * A, int * B){
  int i,j,key,c=0;
   for(i=0;i<n;i++){
     key =A[i];
    for(j=0;j<q;j++){
      if(key==B[j]) c++;
    }
   }
   return c;
}