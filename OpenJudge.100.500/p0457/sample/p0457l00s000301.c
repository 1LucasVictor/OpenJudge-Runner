#include<stdio.h>
int main()
{
          int n,m,i,j,t,sum=0,k,c=0;
            scanf("%d%d%d",&n,&m,&k);

            int a[n+m];
            for(i=0;i<n+m;i++)
            {
                scanf("%d",&a[i]);
            }
            for(i=0;i<n+m;i++)
            {
                for(j=i+1;j<n+m;j++)
                {
                    if(a[i]>a[j])
                    {
                        t=a[i];
                        a[i]=a[j];
                        a[j]=t;
                    }
                }
                sum+=a[i];
                if(sum>k)
                {
                    break;
                }
                else
                {
                    c++;
                }
            }

            printf("%d\n",c);
            return 0;

}












