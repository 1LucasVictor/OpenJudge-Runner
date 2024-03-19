#include<stdlib.h>
#include<stdio.h>
#include<string.h>


/*??´??°??????A???????´???§????????????a??????b?????§????????§????????§???????????????????????????*/
int find_max(int *A,int a,int b){
  int max,i,soeji;
  max=A[a];
  soeji=a;
  for(i=a+1;i<=b;i++){
    if(max<A[i]){
      max=A[i];
      soeji=i;
    }
  }
  return soeji;
}  

int main(){
  int *R,i,n,maxsoeji=-1,ans=0,min=0,hantei=0;
  scanf("%d",&n);
  R=malloc(n*sizeof(int));
  for(i=0;i<n;i++) scanf("%d",&R[i]);
  for(i=0;i<n-1;i++){
    if(R[i]<R[i+1] && (min>R[i] || hantei==0)){
      if(hantei==0) hantei=1;
      min=R[i];
      if(i>=maxsoeji){
        maxsoeji=find_max(R,i+1,n-1);
        if(ans<(R[maxsoeji]-min)) ans=R[maxsoeji]-min;
      }
      else ans=R[maxsoeji]-min;
    }
  }
  if(ans==0){
    ans=R[1]-R[0];
    for(i=1;i<n-1;i++){
      if(ans<(R[i+1]-R[i])) ans=R[i+1]-R[i];
    }
  }
  printf("%d\n",ans);
  return 0;
}