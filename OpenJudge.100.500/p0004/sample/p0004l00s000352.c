#include<stdio.h>
main(){
  long long a,b,i,m;
  while(scanf("%lld %lld",&a,&b)!=EOF){
    for(i=1;i<=a;i++){
      if(a%i==0&&b%i==0){
	m=i;
      }
    }
    printf("%lld %lld\n",m,a*b/m);
  }
  return 0;
}