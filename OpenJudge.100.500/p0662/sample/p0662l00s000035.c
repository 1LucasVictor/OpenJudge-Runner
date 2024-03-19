# include <stdio.h>

int main(){
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    if (a > d || c > b)
        printf("0\n");
    else{
        if (a > c){
            if (b > d)
                printf("%d\n", d - a);
            if (d > b)
                printf("%d\n", b - a);
        }
        if (a < c){
            if (b < d)
                printf("%d\n", b - c);
            if (b > d)
                printf("%d\n", d - c);
        }
    }


    return 0;
}
