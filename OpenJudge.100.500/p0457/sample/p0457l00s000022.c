#include <stdio.h>

int main(void)
{
        int n,m,k,i,j,s=0,c=0;
        scanf("%d%d%d",&n,&m,&k);
        long int a[n],b[m];
        for(i=0;i<n;i++)
                scanf("%ld",&a[i]);
        for(i=0;i<m;i++)
                scanf("%ld",&b[i]);
        if(a[0]>k && b[0]>k){
                printf("0\n");
                return 0;
        }
        i=0;j=0;
        while(s<k){
                if(a[i]>b[j]){
                        s+=a[i];i++;
                }
                else {
                        s+=b[i];j++;
                }
                c++;
                if(c==n+m)break;
        }

        printf("%d\n",c);
        return 0;
}
