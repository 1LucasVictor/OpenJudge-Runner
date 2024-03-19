#include<stdio.h>

int Min(int a,int b){
    if(a<b) return a;
    return b;
}



int main(void){
    int N,zero=0,one=0;
    char s[100000];

    scanf("%s",s);

    for(int i=0;i<100000;i++){
        if(s[i]=='0') zero++;
        else if(s[i]=='1') one++;
        else break;
    }

    printf("%d",Min(zero,one)*2);
    
    
    

    return 0;
}