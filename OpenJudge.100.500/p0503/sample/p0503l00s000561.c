#include<stdio.h>
int main(){
    int n,a[200000],i,m;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&m);
        if(a[m]!=0){
            printf("NO\n");
            return 0;
        }
        else{
            a[m]=1;
        }
    }
    printf("YES\n");
    return 0;
}
