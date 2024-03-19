#include <stdio.h>
int main(){
    int in; //入力
    int h=0; //時
    int m=0; //分
    int s=0; //秒

    scanf("%d",&in);

    while(in>=3600){ //時を決定
    in -= 3600;
    h++;
    }

    while(in>=60){ //分を決定
    in -= 60;
    m++;
    }

    s = in; //余りが秒

    printf("%d:%d:%d\n",h,m,s);
}
