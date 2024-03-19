#include <stdio.h>
#include <math.h>
int Prime(int);
int main(){
  int n, i, input, count=0, frag;
  scanf("%d",&n);
  for(; n>0; n--){
    scanf("%d",&input);
    if(Prime(input) == 1)
      count++;
  }
  printf("%d\n",count);
  return 0;
}

int Prime(x){
  int i;
  if(x == 2) return 1;
  else if(x<2 || x%2==0) return 0;
  for(i=3; i<sqrt(x); i=i+2){
    if(x%i==0) return 0;
  }
  return 1;
}