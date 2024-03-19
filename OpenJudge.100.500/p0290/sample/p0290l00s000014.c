#include <stdio.h>

int catch(int x){
    int count = 0;
    int i;
    for(i = 1; i < x; i++){
        if(x % i == 0){
            ++count;
        }
    }
    if(count > 1){
        return 0;
    }else{
        return 1;
    }
}

int main(void){
    int n, i;
    int x;
    int ans = 0;
    char order[100];
    
    fgets(order, 100, stdin);
    sscanf(order, "%d", &n);
    
    
    for(i = 0; i < n; i++){
        fgets(order, 100, stdin);
        sscanf(order, "%d", &x);
        ans += catch(x);
    }
    printf("%d\n", ans);
    return 0;
}
