#include <stdio.h>

int main(void)
{
        int n,i,c[3]={0,0,0};

        scanf("%d",&n);

        int a[n],b[n];

        for(i=0;i<n;i++){
                scanf("%d",&a[i]);
                b[i]=0;
        }

        for(i=0;i<n;i++){
                if(a[i]%2==0)
                        b[i]=1;
        }
        for(i=0;i<n;i++){
                if(b[i]==1){
                        if(a[i]%3==0 || a[i]%5==0)
                                b[i]=2;
                }
        }

        for(i=0;i<n;i++){
                if(b[i]==0) c[0]++;
                else if(b[i]==1) c[1]++;
                else if(b[i]==2) c[2]++;
        }

        if(c[2]==0)  printf("DENIED\n");
        else printf("APPROVED\n");

        return 0;
}
