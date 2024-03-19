#include <stdio.h>
#define DATALEN 200000

int main(void){
    int n;
    char s[DATALEN + 1];
    int a,b,c,d;
    int i,flag,max;
    int result = 1;//Yesなら1 Noなら0
    
    scanf("%d %d %d %d %d", &n, &a, &b, &c, &d);
    scanf("%s", s);
    max = (c > d) ? c : d;
    //2連の石判定
    for(i = a + 1; i <= max; i++){
        if(s[i] == '#' && s[i-1] == '#'){
            result = 0;
            break;
        }
    }
    
    //追い越し判定
    if(c > d){
        flag = 0;
        for(i = b + 1; i <= d; i++){
            if(s[i] == '.' && s[i-1] == '.' && s[i-2] == '.'){
                flag = 1;
                break;
            }
        }
        if(!flag){
            result = 0;
        }
    }
    
    if(!result){
        puts("No");
    }else{
        puts("Yes");
    }
    
    
    
    return 0;
}