#include<stdio.h>

int main (int argc, char *argv[])
{
    int X,A,B;
    scanf("%d %d %d",&X,&A,&B);

    if ((A-B) >= 0){ 
        printf("delicious\n");
    }else if (((X+A)-B) >= 0){ 
        printf("safe\n");
    }else{
        printf("dangerous\n");
    }   

    return 0;
}
