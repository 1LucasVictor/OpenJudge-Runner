#include<stdio.h>
int main()
{
    int x,y,z,j=0,k,l,i;
    scanf("%d %d %d",&x,&y,&z);
    for(i=x;i<=y;i++)
    {
        if(z%i==0)
            j++;
    }
   printf("%d\n",j);
    return 0;
}



