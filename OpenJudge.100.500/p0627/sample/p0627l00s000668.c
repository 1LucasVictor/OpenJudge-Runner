#include <stdio.h>

    int main(){
        int A,B,x,y,z,temp;
        scanf("%d", &A);
        scanf("%d", &B);
        x = A + B;
        y = A - B;
        z = A * B;
        temp = x;
        if (temp < y){
            temp = y;
        } else if (temp < z){
            temp = z;
        }
        printf("%d", temp);
          return 0;
}
