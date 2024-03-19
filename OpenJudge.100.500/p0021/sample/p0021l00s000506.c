#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n,a[5000],b,i,bmax,j;
    while(1){
        scanf("%d",&n);
        if(n==0)
            return 0;
        b=0;
        bmax=0;
        for(i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        for(i=0;i<n;i++){
            for(j=i;j<n;j++){
                b+=a[j];
                if(bmax<b)
                    bmax=b;
                //printf("b:%d bmax:%d\n",b,bmax);
            }
            b=0;
            
            
        }
        
        
        printf("%d\n",bmax);
    }
    
    return 0;
}