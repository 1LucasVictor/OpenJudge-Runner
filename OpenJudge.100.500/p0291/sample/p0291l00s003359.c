#include <stdio.h>
int main()
{
    int r[200001]={0}, i, j, n, max=-1000000000, c;
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        scanf("%d", &r[i]);
    }
    for(i = 0; i < n; i++){
        for(j = i + 1; j < n; j++){
            c = r[j] - r[i];
            if(c > max){
                max = c;
            }
        }
    }
    printf("%d", max);
    return 0;
}