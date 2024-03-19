#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n,a[5000],b,i,bmax,j,k;
    while(1){
        scanf("%d",&n);
        if(n==0)
            return 0;
        b=0;
        bmax=0;
        for(i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        for(i=n;i>0;i--){
            for(j=0;j<i;j++){
                for(k=j;k<i;k++){
                    b+=a[k];
                    if(bmax<b)
                        bmax=b;
                    //printf("b:%d bmax:%d\n",b,bmax);
                }
                b=0;
            }
            
        }
        
        
        printf("%d\n",bmax);
    }
    
    return 0;
}