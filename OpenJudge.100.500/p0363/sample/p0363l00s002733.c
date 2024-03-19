#include<stdio.h>

int main(){
    int a,b,c;


    scanf("%d%d%d",&a,&b,&c);

    int max,mid,min;


    if(a >b && a > c){
        max=a;
        if(b<c){
            min=b;
            mid=c;
        }
        else{
            min=c;
            mid=b;
        }

    }
    else if(b>a&&b>c){
        max=b;
        if(a<c){
            mid=c;
            min=a;
        }
        else{
            mid=a;
            min=c;
        }
    }
    else if(c>a&&c>b){
        max=c;
        if(a<b){
            mid=b;
            min=a;
        }
        else{
            mid=a;
            min=b;
        }
    }
    printf("%d %d %d\n",min,mid,max);
    return 0;
}

