#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int c = 0;
    for (int i = 1; i < 10; i++){
        for (int j = 1; j < 10; j++){
            if (n == i * j){
                c = 1;
                break;
            }
        }
    }
    char* s[2];
    s[0] = "No";
    s[1] = "Yes";
    printf("%s", s[c]);
    return 0;
}