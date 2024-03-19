#include<stdio.h>
#include<math.h>
int main()
{
    int n,d,i,x,y,c=0;
    double sum=0;
    scanf("%d %d",&n,&d);
    for(i=0;i<n;i++)
    {
        double root=0;
        scanf("%d %d",&x,&y);
        sum=((double)x*(double)x+(double)y*(double)y);
        root=sqrt(sum);
        if(root<=d)
        {
            c++;
        }
    }
    printf("%d\n",c);
    return 0;
}
