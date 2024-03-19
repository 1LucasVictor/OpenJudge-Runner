#include<stdio.h>
#include<stdlib.h>
int compare_int(const void *a, const void *b)
{
    return *(int*)b - *(int*)a;
}
int a[5],k,i;
int main(void){
    for(i = 0;i < 5;i++){
    scanf("%d",&a[i]);
    }
    scanf("%d",&k);
    qsort(a,5,sizeof(int),compare_int);
    
    if(a[0]-a[4] <= k){
        printf("Yay!");
    }else{
        printf(":(");
    }
    return 0;
}