#include <stdio.h>

int main(){

int n,p;
scanf("%d", &n);

if (n%2 == 0){
    p = (n/2);
}
else if(n%2!=0){
       p = ((n+1)/2);
}

printf("%d\n", p);
    return 0;
}



