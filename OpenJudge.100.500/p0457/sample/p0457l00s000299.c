#include<stdio.h>
#include<math.h>
int main()
{
    int m,n,k,count=0;
    scanf("%d %d %d",&n,&m,&k);
    int stack1[n],stack2[m];
    for(int i=0;i<n;i++)scanf("%d",&stack1[i]);
    for(int i=0;i<m;i++)scanf("%d",&stack2[i]);
    for(int i=0,j=0;;)
    {
        if((stack1[i]<stack2[j])&(k-stack1[i]>=0)&(i<n))
        {
            count++;
            k-=stack1[i];
            i++;
        }
        else if((stack2[j]<stack1[i])&(k-stack2[j]>=0)&(j<m))
        {
            count++;
            k-=stack2[j];
            j++;
        }
        else if((i==n)&(k-stack2[j]>=0)&(j<m))
        {
            k-=stack2[j];
            count++;
            j++;
        }
        else if((j==m)&(k-stack1[i]>=0)&(i<n))
        {
            k-=stack1[i];
            count++;
            i++;
        }
        else
        break;
    }
    printf("%d",count);
}
