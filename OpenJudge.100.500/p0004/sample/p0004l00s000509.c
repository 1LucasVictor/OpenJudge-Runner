#include<stdio.h>
int main(){
  long long int a,b,n,i,j;
  while(scanf("%lld %lld",&a,&b)!=EOF){
    if(a>=b){
      n=b;
    }
    else{
      n=a;
    }
    i=a;
    j=b;

    while(1){
      /*   if(n<a){
	n=a%n;
      if(n==0){
	n=a;
	break;
      }
      }
      else if(n<b){
	n=b%n;
      if(n==0){
	n=b;
	break;
      }
      }*/

      n=a%b;
      if(n==0){
	n=b;
	break;
      }else{
	a=b;
	b=n;
      }

    }
    /*
    while(1){
      if(a*i==b*j){
	break;
      }
      else if(a*i<b*j){
	i++;
      }
     else if(a*i>b*j){
	j++;
	   }
	   }*/

    printf("%lld %.0f\n",n,(double)(i)*(double)(j)/(double)(n));
  }
  return (0);
}