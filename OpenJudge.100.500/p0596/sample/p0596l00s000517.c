//c.c C-Unification
#include<stdio.h>
#include<string.h>


int main(void){
    char buf[100001];
    scanf("%s",buf);
    int len = strlen(buf);

    int x0 = 0,x1 = 0;
    for(int i=0;i<len;++i){
        if(buf[i]=='0'){
            x0++;
        }else{
            x1++;
        }
    }
    if(x0==x1){
        printf("%d\n",x0+x1);
    }else if(x0>x1){
        printf("%d\n",x1*2);
    }else{
        printf("%d\n",x0*2);
    }
    return 0;
}