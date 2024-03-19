#include<stdio.h>
int main()
{
    int k,a,b,i,z,m=0;
    scanf("%d %d %d",&k,&a,&b);
    for(i=a; i<=b; i++){

        if(i%k==0){printf("OK\n");m=1;break;}
    }
    if(m==0)printf("NG\n");
return 0;
}
