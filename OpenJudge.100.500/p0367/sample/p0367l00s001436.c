#include<stdio.h>

int main(void)

{

 int a,b,c,i;

 int count=0;


 scanf("%d %d %d",&a,&b,&c);


 for(i=a; i<b+1; i++){


   if(c%i==0){


    count=count+1;


   }


 }


 printf("%d\n",count);


 return 0;


}