#include<stdio.h>
main(){
  int N,a,b,c,i,j,k;
  1 <= a,b,c <= 1000;
  N <= 1000;
  scanf("%d",&N);
  for(i=0;i<N;i++){
    scanf("%d %d %d",&a,&b,&c);
    if(c*c == a*a+b*b){
      printf("YES\n");
    }
    else{
      printf("NO\n");
    }
  }
  return 0;
}