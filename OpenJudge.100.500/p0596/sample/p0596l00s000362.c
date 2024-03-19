#include<stdio.h>
int main(){
    char s[100000];
    int n;
    scanf("%s", &s);
    int sum = 0;
    int a=0;
    int b=0;
    for(int i=0; i<100000;i++){
        if(s[i]=='0')a++;
        else if(s[i]=='1')b++;
        else break;
    }
    if(a<b){
        printf("%d\n", a*2);
    }else{
        printf("%d\n", b*2);
    }
    return 0;
}