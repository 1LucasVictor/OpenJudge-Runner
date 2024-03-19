#include<stdio.h>
int main()
{
   int a,b,c=0,i;
   scanf("%d",&a);
   for(i=0;i<3;i++){
    b=a%10;
    if(b==1){
        c++;
    }
    a/=10;
}
printf("%d\n",c);
return 0;
}

