#include<stdio.h>
long int a(long int ax){
  if(ax < 2019)
    return ax;

  return a(ax%2019);
}
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
  printf("%ld\n",a(min*(min+1)));
  return 0;

}