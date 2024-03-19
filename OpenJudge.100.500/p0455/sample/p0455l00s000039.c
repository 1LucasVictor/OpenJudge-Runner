#include <stdio.h>
#include <math.h>

int calc(int a){
    if (1 <= a && 10 >= a){
        int result = a + pow(a,2)+ pow(a,3);
        return result;
    }
    else {
        return 1;
    }
}


int main(void){
    int a;
    scanf("%d",&a);
    printf("%d", calc(a));
    return 0;

}