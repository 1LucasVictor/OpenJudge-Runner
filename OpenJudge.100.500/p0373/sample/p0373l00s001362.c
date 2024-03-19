#include<stdio.h>
void line(int n, char c){
    while(n--){
        printf("%c", c);
    }
}
int main(){
    int a, b, i;
    while(1){
        scanf("%d %d", &a, &b);
        if(a == 0 && b == 0) break;
        line(b, '#');
        printf("\n");
        while(a-->2){
            printf("#");
            line(b-2, '.');
            printf("#\n");
        }
        line(b, '#');
        printf("\n\n");
    }
return 0;
}

