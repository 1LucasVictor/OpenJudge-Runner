#include <stdio.h>

int main(){
int a = 0;
int b = 0;
int c = 0;
int k = 0;

int sum = 0;

scanf("%d %d %d %d", &a, &b, &c, &k);

if(k - a > 0){
    sum = a;
    if((k - a - b) > 0){
        sum = sum - (k - a - b);
    }
}else {
    sum = k;
}

printf("%d", sum);

}