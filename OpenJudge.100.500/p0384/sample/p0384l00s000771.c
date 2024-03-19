#include<stdio.h>

int main(void){
    char ch;
    int ch_;
    int ans[101];
    int k = 3;
    int i;
    for( i = 1; i<= k; i++){
        k++;
        scanf("%c", &ch);
        if( ch >= 'A' && ch <= 'Z' ){
            ans[i] = ch + 32;
        } else if( ch >= 'a' && ch <= 'z' ){
            ans[i] = ch - 32;
        } else if( ch != '\n' ){
            ans[i] = ch;
        } else {
            break;
        }
    }
    for(int j = 1; j<=i - 1;j++){
        printf("%c", ans[j]);
    }
    printf("\n");
    return 0;
}
