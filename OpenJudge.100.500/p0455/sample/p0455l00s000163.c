#include <stdio.h>

int main()
{
    int a;
    scanf("%d",&a);

    if(a>=0 && a<=10){
        int b=a+a*a+a*a*a;
        printf("%d\n",b);
    }
    else{
        printf("1<=a<=10で入力してください\n");
    }

    return 0;
}