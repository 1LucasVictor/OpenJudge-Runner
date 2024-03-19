#include<stdio.h>
#include<math.h>
int main(void){
  int L,R,i,j,ans=0;
  scanf("%d %d",&L,&R);
  if(L%2019==0 || R%2019==0){
    printf("0");
    return 0;
  }
  else if(R-L>=2018){
    printf("0");
    return 0;
  }
  else{
    int X[R-L+1],min;
    for(i=0;i<R-L+1;i++){
      X[i]=L+i;
    }
    for(i=0;i<R-L+1;i++){
      X[i]=X[i]%2019;
    }
    min=(X[0]*X[1])%2019;
    for(i=0;i<R-L;i++){
      for(j=i;j<R-L;j++){
        ans=(X[j]*X[j+1])%2019;
        if(min>ans){
          min=ans;
        }
      }
    }
    printf("%d",min);
  }
  return 0;
}