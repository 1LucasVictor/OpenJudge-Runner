#include<stdio.h>
#include<math.h>

int main(void){

  long long int L,R,i,j,k;
  scanf("%lld",&L);
  scanf("%lld",&R);
  long long int tmp,min=2019;

  for(i=L;i<R;i++){
    for(j=i+1;j<R+1;j++)
    if(i<j){
     tmp = (i*j) % 2019;
     if(min > tmp){
       min = tmp;
     }
    }
  }

  printf("%lld",min);

  return 0;
}
