#include<stdio.h>

int main(){

int g, gc,X;
scanf("%d %d %d", &g, &gc, &X);

if(X<g){printf("NO\n");}
else{

if ((g+gc)/2 != X){
    
    printf("NO\n");
}

else {
    printf("YES\n");
}
}
    return 0;
}