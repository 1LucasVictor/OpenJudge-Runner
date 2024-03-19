#include <stdio.h>

int main(int argc, char*argv[]){

    int a, b;
    int sum;

    b = 0;

    scanf("%d",&a);

while(b == 0){
    if(1<=a && a<=10){
        sum = a + a*a + a*a*a;
        printf("%d",sum);
        return 0;
    }else{
        printf("1から10の値を入力してね！");
        b = 1;

    }
}
}