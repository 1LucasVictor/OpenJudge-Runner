#include <stdio.h>

void print_exist()
{
    printf(":(\n");
}

void print_not_exist()
{
    printf("Yay!\n");
}

int main(int argc, char* aragv[])
{
    int a, b, c, d, e, k;

    if(scanf("%d", &a) != 1){
        return -1;
    }
    if(scanf("%d", &b) != 1){
        return -1;
    }
    if(scanf("%d", &c) != 1){
        return -1;
    }
    if(scanf("%d", &d) != 1){
        return -1;
    }
    if(scanf("%d", &e) != 1){
        return -1;
    }
    if(scanf("%d", &k) != 1){
        return -1;
    }

    if( e - a > k){
        print_exist();
    } else {
        print_not_exist();
    }

    return 0;
}