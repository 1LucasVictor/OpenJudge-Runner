#include<stdio.h>

int main(){

int g, gc,X;
scanf("%d %d %d", &g, &gc, &X);



if (X >=g && X-g <=gc && X < g+gc){
    
    printf("YES\n");
}

else {
    printf("NO\n");
}

    return 0;
}