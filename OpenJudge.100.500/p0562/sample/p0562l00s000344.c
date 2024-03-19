#include <stdio.h>
int main(){
    
    int a,b;
    scanf("%d", &a);
    scanf("%d", &b);
    if(a==b){
        printf("%d\n",1);
    }
    else{
        int x,res,p;
        x=b/a;
        checkagain:x++;
        p=x*a;
        p=p-(x-1);
        if(p>=b){
            res = x;
        }else{
            goto checkagain;
        }
        printf("%d\n",res);
    }
    
    return 0;
}