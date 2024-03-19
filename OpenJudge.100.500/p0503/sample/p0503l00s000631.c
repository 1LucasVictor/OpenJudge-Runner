#include<stdio.h>
int main(){
    int n,a[200000],m;
    scanf("%d",&n);
    while(n--){
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
