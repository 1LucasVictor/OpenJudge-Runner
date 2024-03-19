#include<stdio.h>
int main()
{
    int N,n,i,j,count=0;
    scanf("%d%d",&N,&n);
     for(i=2;i<=9;i++)
        {
    if((((N*n)%i)==0)&&(((N*n)/i)==1||((N*n)/i)==2||((N*n)/i)==3||((N*n)/i)==4||((N*n)/i)==5||((N*n)/i)==6||((N*n)/i)==7||((N*n)/i)==8||((N*n)/i)==9))
            count++;
        }
        if(count>0||N==1)
            printf("%d\n",N*n);
        else
            printf("-1\n");
    return 0;
}
