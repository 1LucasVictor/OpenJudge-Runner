#include <stdio.h>
#include <math.h>

#define rep(i, n) for(int i = 0; i < n; i++)
#define in_arr(type, a, n) for(int i = 0; i < n; i++) scanf(type, &((a)[i]));

int main(){
    char c;
    int ret = 0;
    for(int i = 0; i < 3; i++){
        scanf("%c", &c);
        if(c == '1'){
            ++ret;
        }
    }
    printf("%d\n", ret);
    return 0;
}
