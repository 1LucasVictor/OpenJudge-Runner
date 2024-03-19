#include<stdio.h>
int main()
{
    long h,n,i;
    long a;
    scanf("%ld%ld", &h, &n);
    for(i = 0; i < n; i++){
        scanf("%ld", &a);
        h -= a;
    }
    if(h <= 0){
        printf("Yes\n");
    }else{
        printf("No\n");
    }
    return 0;
}
