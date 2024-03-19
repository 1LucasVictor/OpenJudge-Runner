#include <stdio.h>
void henge(char [], int []);
int main(void){
    int i, w;
    char a[1000];
    int b[1000];
    while(1){
        a[0] = '\0';
        w=0;
        scanf("%s", a);
        if(a[0] == '0'){
            break;
        }
        henge(a, b);
        for(i = 0; i < 1000;i++){
            w += b[i];
        }
        printf("%d\n", w);
    }
    return 0;
}
void henge(char a[], int b[]){
    int i;
    for(i = 0; i < 1000; i++){
        b[i] = 0;
    }
    for(i = 0; i < 1000; i++){
        if(a[i] == '\0'){
            break;
        }
        b[i] = a[i] - '0';
    }
    return;
}
