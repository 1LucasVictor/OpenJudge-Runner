#include <stdio.h>
#define SUM(a,b) a+b

int main(void){
    int n,m,i,j,re=0;
    scanf("%d %d",&n,&m);
    int ary[n][m], m_ary[m], a_ary[n];
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&ary[i][j]);
        }
    }
    for(j=0;j<m;j++) scanf("%d",&m_ary[j]);
    for(i=0;i<n;i++,re=0){
        for(j=0;j<m;j++){re=SUM(re,ary[i][j]*m_ary[j]);}
        a_ary[i]=re;
    }
    for(i=0;i<n;i++) printf("%d\n",a_ary[i]);
    return 0;
}
