#include <stdio.h>
#include<string.h>

int main() {
    
    int n;
    int a[20010];
    int b[20010];
    scanf("%d",&n);
    for(int i=0;i<n-1;i++){
       scanf("%d",&a[i]);
        b[a[i]]++;
    }
    for(int i=1;i<=n;i++)
        printf("%d\n",b[i]);
    
    return 0;
}