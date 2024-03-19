#include <stdio.h>
#define N 30000
int main(void){
    int n,i,j,k;
    int a[N];
    j=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(k=0;k<1;k++){
            if(i%3==0){
                a[j]=i;
                j++;
                break;
            }
            if(i%10==3){
                a[j]=i;
                j++;
                break;
            }
            if(i%100>=30 && i%100<=39){
                a[j]=i;
                j++;
                break;
            }
            if(i%1000>=300 && i%1000<=399){
                a[j]=i;
                j++;
                break;
            }  
            if(i%10000>=3000 && i%10000<=3999){
                a[j]=i;
                j++;
                break;
            }
            
        }
        
    }
    j=0;
    while(a[j]!=0){
        printf(" %d",a[j]);
        j++;
    }
    printf("\n");
    return 0;
}
