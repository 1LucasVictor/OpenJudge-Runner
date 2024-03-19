#include<stdio.h>
main(){
  int n,a,b,c,i,j,k;
  scanf("%d",&n);
  for(i=0;i<n;i++){
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