#include <stdio.h>
int main(){
    int a, b, c, d, e, k;
    scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &k);
    int ant[5];
    ant[0] = a;ant[1] = b;ant[2] = c;ant[3] = d;ant[4] = e;
    int cnt = ant[4] - ant[0];
    if(cnt>k){
        printf(":(");
    }
    else{
        printf("Yay!");
    }
    return 0;
}