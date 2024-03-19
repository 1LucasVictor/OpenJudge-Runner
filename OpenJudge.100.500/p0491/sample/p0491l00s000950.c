

#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main()
{

long long int i,n,m,min1=0,min2;

scanf("%lld%lld",&n,&m);

min2=abs(m-n);
 if (n%m==0)
   {
     printf("%d",0);

   }
else{
  while(1){
    min1=abs(m-n);
    n=min1;

    if(min1>min2)
        break;
    min2=min1;



}





    printf("%lld",min2);


}




}
