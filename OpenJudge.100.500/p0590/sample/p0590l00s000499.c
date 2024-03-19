#include <stdio.h>

int main(){
    int a,b,c,d,e,k;
    scanf ("%d%d%d%d%d%d", &a,&b,&c,&d,&e, &k);

    if (b-a > k){
        printf (":(\n");
        return 0;
    }
    if (c-a > k){
        printf (":(\n");
        return 0;
    }
    if (d-a > k){
        printf (":(\n");
        return 0;
    }
    if (e-a > k){
        printf (":(\n");
        return 0;
    }
    if (c-b > k){
        printf (":(\n");
        return 0;
    }
    if (d-b > k){
        printf (":(\n");
        return 0;
    }
    if (e-b > k){
        printf (":(\n");
        return 0;
    }
    if (d-c > k){
        printf (":(\n");
        return 0;
    }
    if (e-c > k){
        printf (":(\n");
        return 0;
    }
    if (d-e > k){
        printf (":(\n");
        return 0;
    }
    printf ("Yay!\n");
    
}