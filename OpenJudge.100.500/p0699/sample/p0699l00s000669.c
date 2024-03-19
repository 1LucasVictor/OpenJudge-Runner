#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int flag=1;
    if(a==b){
        if(a!=5) flag=0;
        else if(c!=7) flag=0;
    }
    else if(a==c){
       if(a!=5) flag=0;
       else if(b!=7) flag=0;
    }
    else if(b==c){
       if(b!=5) flag=0;
       else if(a!=7) flag=0;
    }
    if(flag) printf("YES");
    else printf("NO");
    return 0;
}
