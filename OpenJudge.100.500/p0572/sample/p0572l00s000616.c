#include<stdio.h>
int main(void){
  long L,R;
  scanf("%ld",&L);
  scanf("%ld",&R);
  long min;
  long l=L%2019;
  long r=R%2019;
  while (l>r){
    long tmp=l;
  	l=r;
  	r=tmp;
  }
    for(long i=l;i<=2018;i++){
      for(long j=i+1;j<=r;j++){
        if( min > ((i%2019)*(j%2019)) % 2019){
          min = ((i%2019)*(j%2019))%2019;
        }
      }
    }
  if(R-L>2018){
    min=0;
  }
  printf("%ld",min);
  return 0;
}