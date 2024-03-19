#include <stdio.h>

#define LENGTH 5

int main(void) {
    char a[LENGTH];

    scanf("%s", a);
    
    if((a[0] == a[1]) && (a[2] == a[3]) && (a[1] != a[2])){
        printf("Yes\n");
    }else if((a[1] == a[2]) && (a[0] == a[3]) && (a[0] != a[1])){
        printf("Yes\n");
    }else if((a[0] == a[2]) && (a[1] == a[3]) && (a[0] != a[1])){
        printf("Yes\n");
    }else{
        printf("No\n");
    }

    return 0;
}