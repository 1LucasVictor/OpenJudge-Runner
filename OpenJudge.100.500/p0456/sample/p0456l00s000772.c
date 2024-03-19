#include<stdio.h>
int main(void){
    char a[10001];
    char b[10001];
    int i, count = 0, ans = 0;
    scanf("%s %s", a, b);
    for(i = 0; i >= 0; i++){
        if(a[i] == '\0'){
            break;
        }else{
            count++;
        }
    }
    for(i = 0; i < count; i++){
        if(a[i] != b[i]){
            ans++;
        }
    }
    printf("%d\n", ans);
    return 0;
}