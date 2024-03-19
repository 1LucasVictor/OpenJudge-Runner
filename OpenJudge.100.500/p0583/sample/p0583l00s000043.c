#include <stdio.h>
int max(int a, int b){
    return (a>b)? a : b;
}

int main(void){
    int N, a, b, c, d;
    scanf("%d%d%d%d%d", &N, &a, &b, &c, &d);
    char s[N+1];
    scanf("%s", s);
    int flag1 = 0; //#が2連続以上で1
    int flag2 = 0; //...が存在で1
    
    for(int i = a; i <= max(c,d)-1; i++){
        if((i < d-1) && (s[i] == '#') && (s[i+1] == '#')){
            flag1 = 1;
        }
        if((i >= b-2) && (i <= d-2) && (s[i] == '.') && (s[i+1] == '.') && (s[i+2] == '.')){
            flag2 = 1;
        }
    }
    if(c<d && flag1 == 0){
        printf("%s", "Yes");
        return 0;
    }
    if(c>d && flag1 == 0 && flag2 == 1){
        printf("%s", "Yes");
        return 0;
    }
    printf("%s\n", "No");
    return 0; 
}
