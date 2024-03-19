#include<stdio.h>
int main(){
  long int r = 2019;
  long int L,R,min;
  long int i,j;
  scanf("%ld %ld",&L,&R);
  min = L%r;
  for(i=L;i<R;i++){
    if(min == 0)
      break;

    if(min > i%r)
      min = i%r;
  }
  printf("%ld\n",(min*(min+1))%2019);
  return 0;

}