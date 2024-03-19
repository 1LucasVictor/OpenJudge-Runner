#include <stdio.h>
int main(){
    int c,d,e,f;
    c = getchar();
    d = getchar();
    e = getchar();
    f = getchar();
    if((c==d)&&(e==f) ){
        printf("Yes\n");
    }
    else if((c==e)&&(d==f)){
        printf("Yes\n");
    }
    else if((c==f)&&(d==e)){
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }
}
