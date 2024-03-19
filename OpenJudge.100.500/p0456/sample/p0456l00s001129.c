#include<stdio.h>
#include <string.h>


int main(void){
    char a[200001], b[200001];
    scanf("%s", a);
    scanf("%s", b);
    int ans = 0;
    int n = strlen(a);
    for(int i = 0; i < n; i++){
        if(a[i] != b[i]){
            ans++;
        }
    }

    printf("%d\n", ans);
    return 0;
}