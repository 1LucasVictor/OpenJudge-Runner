#include<stdio.h>
int main(){
     int n,k,a,b,c,d,s=0;
    scanf("%d%d%d%d",&a,&b,&c,&d);
 
    if(b<=c){printf("%d",s=0);}
    else{
        s=b-c;
        if(b>d){s=s-(b-d);}
        if(a>c)s=s-(a-c);
        printf("%d",s);
    }
}