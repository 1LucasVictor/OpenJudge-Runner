#include <stdio.h>
int main(void){
    int a, b, c, d, e, k;
    
    scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &k);
    
    if(k >= (a-b)&&(a-c)&&(a-d)&&(b-c)&&(b-d)&&(b-e)&&(c-d)&&(c-e)&&(d-e)){
        printf("Yay!");
    }else{
        printf(":(");
    }
    
}
