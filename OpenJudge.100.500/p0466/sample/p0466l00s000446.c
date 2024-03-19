#include<stdio.h>

int main()
{
    int i, c = 0, n;
    char array[10], array_n[11];
    for(i = 0; i < 11; i++){
        scanf("%c", &array[i]);
        if(array[i] == '\n'){
            n = i;
            break;
        }
    }
    for(i = 0; i < n + 1; i++){
        scanf("%c", &array_n[i]);
    }
    for(i = 0; i < n; i++){
        if(array[i] == array_n[i]){
            c++;
        }
    }
    if(c == n){
        printf("Yes");
    }
    else{
        printf("No");
    }

    return 0;
}
