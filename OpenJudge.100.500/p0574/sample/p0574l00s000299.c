
#include <stdio.h>

int main(int argc, const char * argv[]) {
    int S;
    int x[4];
    
    scanf("%d", &S);
    
    x[0] = S % 10;
    x[1] = (S % 100 - x[0])/10;
    x[2] = (S % 1000 - x[1])/100;
    x[3] = (S % 10000 - x[2])/1000;
    
    if (x[0] == x[1] || x[1] == x[2] || x[2] == x[3]) {
        printf("Bad");
    }else{
        printf("Good");
    }
    
    //printf("Hello, World!\n");
    return 0;
}
