#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a<b<c){
        if(a==b){printf("No");}
        else if(b==c){printf("No");}
        else printf("Yes\n");
    }
    else {
    printf("No");
    }
    return 0;
}