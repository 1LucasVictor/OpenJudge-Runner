#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a[10000];
    int max=-100000,min=100000,i=0,n=0,count=0;
    scanf("%d",&n);
    if(n==1){
        scanf("%d",&a[0]);
        max = a[0];
        min = a[0];
        count = a[0];
    }else{
        for(i=0;i<n;i++){
            scanf("%d",&a[i]);
            if(a[i]>max){
                max = a[i];
            }
            if(a[i]<min){
                min = a[i];
            }
            count += a[i];
        }
    }
    printf("%d %d %d\n",min,max,count);
    return 0;
}