#include<stdio.h>
#include<math.h>
int main(void){
  int L,R,i,j,ans=0,count=1;
  scanf("%d %d",&L,&R);
  if(L%2019==0 || R%2019==0 || R%2019<L%2019){
    printf("0");
    return 0;
  }
  else if(R-L>=2019){
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
      for(j=i+1;j<R-L+1;j++){
        ans=(X[i]*X[j])%2019;
        if(min>ans){
          min=ans;
        }
      }
      count=1;
    }
    printf("%d",min);
  }
  return 0;
}