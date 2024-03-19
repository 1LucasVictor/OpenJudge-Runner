#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdio.h>
int main(int argc, const char * argv[]) {
    int n;
    scanf("%d",&n);
    int arr[n+1];
    for(int i=0;i<=n;i++)arr[i]=0;
    for(int i=0;i<n-1;i++){
        int tmp;
        scanf("%d",&tmp);
        arr[tmp]++;
    }
    for(int i=1;i<=n;i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}
