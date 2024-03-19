#include <stdio.h>

int main()
{
    int i, j, n, flag = 0;
    scanf("%d", &n);
    int x[n];
    for(i = 0; i <n; i++){
        scanf("%d", &x[i]);
    }
    for(i = 0; i < n; i++){
        for(j = i+1; j < n; j++){
            if(x[i]==x[j]){
                flag = 1;
            }
        }
    }
    if(flag == 0){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    return 0;
}
