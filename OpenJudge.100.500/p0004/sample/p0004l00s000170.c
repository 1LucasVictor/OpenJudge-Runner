#include<stdio.h>

int main(){
  int gcd,lcm,a,b,i;
  while(scanf("%d %d",&a,&b) != EOF){

    /*--gcd--*/ 
   if(a>b)
{
  for(i=1;i<=b;i++)
{
    if(a%i==0 && b%i==0)
      gcd = i;
  }
 }
    else if(a<b)
      {
	for(i=1;i<=a;i++){
	  if(a%i==0 && b%i==0)
	    gcd = i;
	}
      }
    else{
      gcd = a;
    }

   /*lcm*/
   int k,m;
   k = a/gcd;
   m = b/gcd;
   lcm = gcd*k*m;

   printf("%d %d\n",gcd,lcm);
  }

  return 0;
}