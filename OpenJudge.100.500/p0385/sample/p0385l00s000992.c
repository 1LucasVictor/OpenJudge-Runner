#include<stdio.h>

int sum(char a[1000]){
    int i = 0;
    int sum = 0;
    while (a[i] != '\0'){
        sum += a[i] - '0';
        i++;
    }
    return sum;
}

int main(void){
    char x[1000];
    while (1)
    {
        scanf("%s", x);
        if(x[0] == '0'){
            break;
        }
        printf("%d\n", sum(x));
    }
    return 0;
}
