#include<stdio.h>
int main()
{
    int i,s,h,c,d,k,j,l,n;
int card[4][13]={0};
    char a,b;
    scanf("%d",&l);
    while(l--)
    {
getchar();
        scanf("%c",&a);
        scanf("%d",&n);
        if(a=='S')
        {
            card[0][n-1]=1;

        };
        if(a=='H')
        {

            card[1][n-1]=1;

        };
        if(a=='C')
        {


            card[2][n-1]=1;

        };
        if(a=='D')
        {

            card[3][n-1]=1;

        };

    }
for(i=0;i<4;i++)
{
    if(i==0)b='S';
    if(i==1)b='H';
    if(i==2)b='C';
    if(i==3)b='D';
    for( j=0;j<13;j++)
    {
        if(card[i][j]==0)
      {
          printf("%c %d\n",b,j+1);
      }
    }

}
}

