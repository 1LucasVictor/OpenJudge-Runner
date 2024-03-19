#include<stdio.h>
int main(){
  long long int a,b,ans1=0,ans2=0,i;
  while(scanf("%lld %lld",&a,&b)!=EOF){
    if(a<b){
      i=a;a=b;b=i;
    }   
    for(i=b;i>=0;i--){
      if((a%i==0) && (b%i==0)){
	ans1=i;
	break;
      }
      i=i-(a-b)+1;
    }
    for(i=a;i<=2000000000;i++){
      if((i%a==0) && (i%b==0)){
	ans2=i;
	break;
      }
      i=i+a-b-1;
    }
    printf("%lld %lld\n",ans1,ans2);
  }
  return(0);
}