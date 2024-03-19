#include<stdio.h>
#include<math.h>
int main(void){
  int L,R,i,ans=0;
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
    int X[R-L+1];
    for(i=0;i<R-L;i++){
      X[i]=L+i;
    }
    for(i=0;i<R-L;i++){
      X[i]=X[i]%2019;
    }
    int min=X[0],check=0;
    for(i=0;i<R-L;i++){
      if(X[i]<min){
        min=X[i];
        check=i;
      }
    }
    if(check==R-L){
      ans=(min*X[0])%2019;
      printf("%d",ans);
    }
    else{
      printf("%d",min*(min+1));
    }
  }
  return 0;
}
    