#include<stdio.h>
int main()
{
           long long  int n,m,k,i,j,t,c=0,sum=0;
            scanf("%lld%lld%lld",&n,&m,&k);
            int a[n+m];
            for(i=0;i<n+m;i++)
            {
                scanf("%lld",&a[i]);
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
            }




            for(i=0;i<n+m;i++)
            {

                sum+=a[i];

                if(sum>=k)
                {
                    break;
                }
                else
                {
                    c++;
                }
            }


              printf("%lld\n",c);

    return 0;


}












