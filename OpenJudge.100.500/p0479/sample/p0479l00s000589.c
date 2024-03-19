#include <stdio.h>
#include<string.h>

int main() {
    
    int n;
    int a[20000];
    int b[20001];
    scanf("%d",&n);
    for(int i=0;i<n-1;i++){
       scanf("%d",&a[i]);
        for(int j=1;j<=n;j++){
            if(a[i]==j){
                b[j]++;
                break;
            }
        }
    }
    for(int i=1;i<=n;i++)
        printf("%d\n",b[i]);
    
    return 0;
}