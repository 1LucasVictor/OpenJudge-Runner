#include<stdio.h>
#include<math.h>
int main()
{
    long int N,a=0,i,j,sum3=0,sum2=0,c=0;
    scanf("%ld",&N);
    long int num[N];
    for(i=0;i<N;i++)
    {
        scanf("%ld",&num[i]);
    }
            for(i=0;i<N;i++)
    {if(num[i]>3)
   {

       for(j=2;j<=sqrt(num[i]);j++){
    a=num[i]%j;
       if(a==0)
        c++;
       if(c>0){
          sum2=sum2+1;
          a=0;
          c=0;
          break;
}
continue;
}}
}
sum3=(N-sum2);
printf("%ld\n",sum3);
return 0;
}

