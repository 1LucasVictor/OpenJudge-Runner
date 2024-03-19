#include<stdio.h>

int main(){
  int i,j,k=0;
  int A,B,C;
  
  scanf("%d %d %d",&A,&B,&C);
  if(A<B){
    for(i=1;i<=B;i++){
      if(A%i==0&&B%i==0)
        k++;
      if(k==C){
        printf("%d\n",k);
        return 0;
      }
    }
  }
  
  else{
    for(i=1;i<=A;i++){
      if(A%i==0&&B%i==0)
        k++;
      if(k==C){
        printf("%d\n",k);
        return 0;
      }
    }
  }
}
    

    