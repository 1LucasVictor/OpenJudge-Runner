#include <stdio.h>

int main(void){
    int n,i,m;
    scanf("%d",&n);
    m=100000;
    for(i=0;i<n;i++){
        m=m+m*5/100;
        if(m%1000!=0) m=m+1000-(m%1000);
    }
    printf("%d\n",m);
    
    return 0;
}
