#include <stdio.h>

int main(){
        int S;
        scanf("%d", &S);
        if(0==S)      printf("0\n");
        if(1==S)      printf("1\n");
        if(10==S)      printf("1\n");
        if(11==S)      printf("2\n");
        if(100==S)      printf("1\n");
        if(101==S)      printf("2\n");
        if(110==S)      printf("2\n");
        if(111==S)      printf("3\n");
        return 0;
}
