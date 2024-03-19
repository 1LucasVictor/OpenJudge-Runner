#include <stdio.h>

int main(){
  int x,y,i,j,key,res=0,A[10000+1];

  scanf("%d",&x);
  for(i=0;i<x;i++){
    scanf("%d",&A[i]);
  }
   scanf("%d",&y);
  for(i=0;i<y;i++){
    scanf("%d",&key);
    for(j=0;j<x;j++){
    if(Lsearch(A[j],key)==1){
      res++;
     }
    }
  }

    printf("%d\n",res);
    return 0;
  }

int Lsearch(int B,int kkey){

  if(B==kkey) return 1;
  else return 0;
}