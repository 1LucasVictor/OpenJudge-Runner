#include <stdio.h>

int main(){


        int g;
        scanf("%d",&g);
        switch (g){
                case 0: printf("0\n"); break;
                case 1: printf("1\n"); break;
                case 10: printf("1\n"); break;
                case 11: printf("2\n"); break;
                case 100: printf("1\n"); break;
                case 101: printf("2\n"); break;
                case 110: printf("2\n"); break;
                case 111: printf("3\n"); break;
                default: break;
        }
        return 0;

}