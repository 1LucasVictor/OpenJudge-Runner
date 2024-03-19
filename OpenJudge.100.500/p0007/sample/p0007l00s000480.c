#include <stdio.h>
int main(){
    int a,b,c,d,i,f;
    while(scanf("%d",&i) != EOF){
        if(i>36){
            f=0;
        }
        else{
        f=0;
        for(a=0;a<=9;a++){
            for(b=0;b<=9;b++){
                for(c=0;c<=9;c++){
                    for(d=0;d<=9;d++){
                        if(a+b+c+d == i){
                            f++;
                        }
                    }
                }
            }
        }
        }
        printf("%d\n",f);
    }
    return (0);
}