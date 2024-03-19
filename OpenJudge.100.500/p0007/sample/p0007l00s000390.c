#include<stdio.h>

int main(){
    int i;
    int n;
    int count[36]={0};
    int a=0,b=0,c=0,d=0;
    int ab, abc;

    
    while(~scanf("%d", &n)){
        for(i=0;i<=36;i++)count[i]=0;
        ab=abc=0;
        for(a=0;a<=9;a++)
        {
            for(b=0;b<=9;b++)
            {
                ab=a+b;
                for(c=0;c<=9;c++){
                    abc=ab+c;
                    for(d=0;d<=9;d++){
                        count[abc+d]++;
                    }
                }
            }
        }
        printf("%d\n", count[n]);
    }
    

    return 0;
}
