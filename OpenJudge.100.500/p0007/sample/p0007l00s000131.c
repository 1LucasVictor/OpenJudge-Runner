#include<stdio.h>

int main(){
    int i;
    int n;
    int count[37]={0};
    int a,b,c,d;
    while(~scanf("%d", &n)){
        for(i=0;i<=36;i++)count[i]=0;
        for(a=0;a<=9;a++)
            for(b=0;b<=9;b++)
                for(c=0;c<=9;c++)
                    for(d=0;d<=9;d++){
                        count[a+b+c+d]++;
        }
        printf("%d\n", count[n]);
    }
    return 0;
}
