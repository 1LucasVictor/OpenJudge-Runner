#include<stdio.h>
int main()
{
    int n,d,x,y,count=0;
    float r;
    scanf("%d %d",&n,&d);
    for(int i=0;i<n;i++)
    {
        scanf("%d %d",&x,&y);
        r=(float)sqrt((x*x)+(y*y));
        if(r<=d)
        {
            count++;
        }
        else { continue;}
    }
    printf("%d\n",count);
    return 0;

}
