#include <stdio.h>

int main(void)
{
    int i,a,x,n,m;
    int f[101][101],b[101],c[101];
    
    scanf("%d%d",&n,&m);
    
    for(i=0;i<n;i++){
        for(a=0;a<m;a++){
            scanf("%d",&f[i][a]);
        }
    }
    for(a=0;a<m;a++){
        scanf("%d",&b[a]);
    }
    for(i=0;i<n;i++){
        for(a=0;a<m;a++){
            c[i]+=f[i][a]*b[a];
        }
        printf("%d\n",c[i]);
    }
    return 0;
}
