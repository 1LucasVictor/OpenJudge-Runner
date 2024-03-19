#include<stdio.h>

int main() {
    int a, b, c, d;
    scanf("%d%d%d%d", &a, &b, &c, &d);

    if((b<=c && a<=d) || (d<=a && c<=b)) {
        printf("0\n");
    }else if(a<=c && b<=d){
        printf("%d\n",b-c);
    }else if(c<=a && d<=b){
        printf("%d\n",d-a);
    }else if(c<=a && b<=d){
        printf("%d\n",b-a);
    }else if(a<=c && d<=b){
        printf("%d\n",d-a);
    }

    return 0;
}
