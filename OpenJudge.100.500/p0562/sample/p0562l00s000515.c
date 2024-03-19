//B - Power Socket
//2019/09/09

#include <stdio.h>

int main(void) {
    int p_socket,unused,num=1,ans=0;
    scanf("%d %d",&p_socket,&unused);
    p_socket--;
    while (num<unused) {
        num+=p_socket;
        ans++;
    }
    printf("%d\n",ans);
    return 0;
}