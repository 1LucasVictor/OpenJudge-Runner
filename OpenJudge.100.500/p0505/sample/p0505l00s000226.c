
#include <stdio.h>

int main()
{   
    int h,n;
    scanf("%d%d",&h,&n);
    int a[n];
    long long ans=0;
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        ans+=a[i];
    }
    if(ans>=h){
    printf("Yes");
    }else{
        printf("No");
    }
    return 0;
}
