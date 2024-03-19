#include<stdio.h>
int main(){
  int n,i,j;
  long long int a,b,A,B;
  while(scanf("%lld %lld",&a,&b)!=EOF){
    if(a>b){
      n=b;
    }
    else if(a<b){
      n=a;
    }
    i=1;
    j=1;
    while(1){
      if(a%n==0 && b%n==0){
	break;
      }
      else if(n<a){
	n=a%n;
      }
      else if(n<b){
	n=b%n;
      }
    }
    while(1){
      if(a*i==b*j){
	break;
      }
      else if(a*i<b*j){
	i++;
      }
      else if(a*i>b+j){
	j++;
      }
    }
    printf("%d %d\n",n,a*i);
  }
  return (0);
}