#include <stdio.h>

int main(void){
    int i,j,n;
    int a[200000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]==a[j]){
                puts("NO");
                return 0;
            }
        }
    }
    puts("YES");
    return 0;
}