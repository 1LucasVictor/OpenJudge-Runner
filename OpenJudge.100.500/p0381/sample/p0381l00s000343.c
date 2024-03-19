#include <stdio.h>
int main(void){
        int i,j,k;
        int n,m,c;
        while(1){
                scanf("%d %d",&n,&m);
                if(n==0 && m==0)
                        break;
                c=0;
                for(i=1;i<=n;i++){
                        for(j=1;j<=n;j++){
                                for(k=1;k<=n;k++){
                                        if(i==j || i==k || j==k)
                                                continue;
                                        if((i+j+k) == m){
                                                //printf("%d+%d+%d==%d\n",i,j,k,i+j+k);
                                                c++;
                                        }
                                }
                        }
                }
                printf("%d\n",c/6);
        }
        return 0;
}
