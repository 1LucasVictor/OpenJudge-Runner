#include <stdio.h>
int main(){
    
    int a,b;
    scanf("%d", &a);
    scanf("%d", &b);
    if(a==b){
        printf("%d\n",1);
    }
    else{
        int x,res;
        x=b/a;
      checkagain:x++;
        if(x*a>=b){
            res=x;
        }
        else{
            goto checkagain;
        }
        printf("%d\n",res);
    }
    
    return 0;
}