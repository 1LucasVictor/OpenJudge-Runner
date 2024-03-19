
#include <stdio.h>

int main(void){
    int n,i,a[3],j;
    scanf("%d",&n);
    
    for(i=0;i<n;i++){
        for (j=0; j<3; j++) {
            scanf("%d",&a[j]);
        }
        if(a[0]*a[0]==a[1]*a[1]+a[2]*a[2]
           ||a[1]*a[1]==a[0]*a[0]+a[2]*a[2]
           ||a[2]*a[2]==a[1]*a[1]+a[0]*a[0]){
            printf("YES\n");
        }
        else
            printf("NO\n");
    }

    return 0;
}