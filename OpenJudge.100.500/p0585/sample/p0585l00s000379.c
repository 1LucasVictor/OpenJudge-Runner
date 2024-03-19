#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int a = 0;
    int b = 0;
    int t = 0;
    int result = 0;
    
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&t);


    for (int i = 1; i <= t ; i++) {
        if (i % a == 0) {
            result = result + b;
        }
    }
    
    printf("%d\n",result);
    return 0;
}
