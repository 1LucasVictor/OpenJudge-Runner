#include<stdio.h>
main(){
  int a,b,c,n,i;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d%d%d",&a,&b,&c);
    if(a*a+b*b==c*c || b*b+c*c==a*a || a*a+c*c==b*b){
      printf("YES\n");
    }
    else{
      printf("NO\n");
    }
  }
  return 0;
}