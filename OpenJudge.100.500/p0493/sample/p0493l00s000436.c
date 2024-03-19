#include<stdio.h>

int main()
{
    int yen,hp,hpp,x,y,z;
    scanf("%d",&yen);

    if(yen%500!=0)
        x=yen/500;
    hp=1000*x;
    y=yen%500;
    z=y/5;
    hpp=5*z;
    int sum;
    sum = hpp+hp;
    printf("%d",sum);
}
