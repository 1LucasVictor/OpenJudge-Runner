#include<stdio.h>
#include<stdlib.h>
int main(){
    int a[100], l=0;
    char x[100];
    while(scanf("%s", x)!=EOF){
        if(x[0]=='+')a[l-2]+=a[l-1], l--;
        else if(x[0]=='-')a[l-2]-=a[l-1], l--;
        else if(x[0]=='*')a[l-2]*=a[l-1], l--;
        else a[l++]=atoi(x); 
    }
    printf("%d\n", a[0]);
    return 0;
}