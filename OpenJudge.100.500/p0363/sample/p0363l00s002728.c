
#include<stdio.h>
int main(void){
    int a, b, c, l, m, s;
    scanf("%d%d%d", &a, &b, &c);
    if(a<b){
        if(b>c){
            l = b;
            if(a<c){
                m = c;
                s = a;
            }else{
                m = a;
                s = c;
            }
        }else{
            l = c;
            m = b;
            s = a;
        }
    }else{
        if(a<c){
            l = c;
            m = a;
            s = b;
        }else{
            l = a;
            if(b<c){
                m = c;
                s = b;
            }else{
                m = b;
                s = c;
            }
        }
    }
    printf("%d %d %d\n", s, m, l);
    return 0;
}