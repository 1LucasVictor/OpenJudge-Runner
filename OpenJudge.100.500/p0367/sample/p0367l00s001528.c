#include<stdio.h>

int main()
{
     int a,b,c,con=0;
     scanf("%d %d %d",&a,&b,&c);
     for(int i = a; i <= b;i++){
          if(c%i==0)
               con +=1;
     }
     printf("%d\n",con);
     return 0;
}
