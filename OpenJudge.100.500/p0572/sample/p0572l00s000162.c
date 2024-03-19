#include<stdio.h>
int main(){
  long int L,R,min;
  long int i,j;
  scanf("%ld %ld",&L,&R);
  min = L%2019;
  for(i=L;i<R;i++){
    if(min > i%2019)
      min = i%2019;
  }
  printf("%ld\n",min*(min+1));
  return 0;

}