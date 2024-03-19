#include <stdio.h>

int main(int argc, const char * argv[])
{
    int i,j,m,n,x,a[100][100],b[100],c=0;
    scanf("%d %d",&i,&j);
    
    for(m=0;m<i;m++){
        for(n=0;n<j;n++){
            scanf("%d ",&x);
            a[m][n]=x;
        }
    }
    
    for(m=0;m<i;m++){
        scanf("%d",&x);
        b[m]=x;
    }
    
    for(m=0;m<i;m++){
        for(n=0;n<j;n++){
            c += a[m][n] * b[n];
        }
        printf("%d\n",c);
        c=0;
    }
    
    return 0;
}