#include <stdio.h>

    int main(){
        int A,B,x,y,z,temp;
        scanf("%u", &A);
        scanf("%u", &B);
        x = A+B;
        y = A-B;
        z = A*B;

        temp = z;
        if (temp < y){
            temp = y;
        } else if (temp < x){
            temp = x;
        }
        printf("%u", temp);
          return 0;
}
