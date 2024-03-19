#include<stdio.h>
int main(void){
    int i,j,n,x=0,a[200001];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(a[i]==a[j]){
                x=1;
                break;
            }
        }
        if(x==1)break;
    }

    if(x){
        printf("%s","NO");
    }else{
        printf("%s","YES");
    }
    return 0;    
}
