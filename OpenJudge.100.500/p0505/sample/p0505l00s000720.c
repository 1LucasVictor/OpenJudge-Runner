#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
#include <time.h>
int main(){
    int i,h,n,damage=0,a[100010]={};
    scanf("%d %d",&h,&n);
    for(i=0; i<n; i++){
        scanf("%d",&a[i]);
        damage+=a[i];
    }
    if(damage>=h){
        printf("Yes");
        return 0;
    }
    printf("No");
    return 0;
}