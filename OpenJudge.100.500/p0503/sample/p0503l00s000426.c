#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    int *a=(int*)malloc(sizeof(int)*1000000000);
    for(int i=0;i<1000000000;i++){
        a[i]=0;
    }
    int n;
    int flag=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int b;
        scanf("%d",&b);
        if(a[b]==1){
            printf("NO");
            flag=1;
            break;
        }else{
            a[b]=1;
        }
    }
    if(flag==0){
        printf("YES");
    }
    return 0;
}