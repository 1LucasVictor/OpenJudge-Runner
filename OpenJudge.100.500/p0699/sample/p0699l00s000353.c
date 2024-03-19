#include <stdio.h>
int ABC42(void);

int main(void){
    ABC42();
    return 0;
}

int ABC42(void){
    int a,b,c,n=0;
    scanf("%d %d %d",&a,&b,&c);
    if(a==7||b==7||c==7){
        if((a==5&&b==5)||(b==5&&c==5)||(c==5&&a==5)){
            printf("YES");
            n++;
    }}
    if(n==0)printf("NO");
    return 0;
}