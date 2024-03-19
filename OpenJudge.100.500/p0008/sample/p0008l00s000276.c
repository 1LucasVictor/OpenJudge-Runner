#include <stdio.h>

int main (void)
{
    
    int n, list[1000000];
    int i, j, count;
    while (scanf ("%d", &n) != EOF){
        count = 0;
        for (i = 0; i <= n; i++) list[i] = 0;

        for (i = 2; i <= n; i++){
            if(list[i] == 0){
                count++;
            
                for(j = 1; j * i <= n; j++){
                    list[j * i] = 1;
                }
            }
        }
        printf("%d\n", count);
    }
    return (0);
}
