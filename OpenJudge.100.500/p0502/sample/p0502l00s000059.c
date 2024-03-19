#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
int main(){
    int n,i,flag=0,a[105]={};
    scanf("%d",&n);
    for(i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    for(i=0; i<n; i++){
        if(a[i]%2==0){
            flag+=(a[i]%3)*(a[i]%5);
        }
    }
    if(flag==0)printf("APPROVED");
    else printf("DENIED");
    return 0;
}