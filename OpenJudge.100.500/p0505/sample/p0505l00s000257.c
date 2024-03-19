#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int h = 0,n = 0;
    int a=0, sum=0;
    scanf("%d%d",&h,&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a);
        sum=sum+a;
    }
    if(sum>=h){
        printf("Yes");
    }else{
            printf("No");
    }
    return 0;
}