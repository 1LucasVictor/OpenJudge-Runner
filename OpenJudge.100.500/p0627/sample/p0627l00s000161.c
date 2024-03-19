#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int a = 0;
    int b = 0;
    
    int plus = 0;
    int minus = 0;
    int kakeru = 0;
    int result = 0;
    
    scanf("%d %d",&a,&b);
    
    plus = a + b;
    minus = a - b;
    kakeru = a * b;
    
    if (plus >= minus) {
        result = plus;
    }else{
        result = minus;
    }
    if (result >= kakeru) {
        result = result;
    }else{
        result = kakeru;
    }
    
    printf("%d\n",result);
    
    return 0;
}
