#include <stdio.h>
#include <string.h>

int main(){

    char bee[3];
    int ans=0;
    for(int i = 0;i < 3;i++){
        scanf("%c", &bee[i]);
        if(bee[i]=='1') ans++;
    }

    printf("%d\n", ans);

    return 0;
}