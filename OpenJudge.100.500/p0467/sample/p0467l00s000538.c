#include <stdio.h>


int main(){
    int a, b, c, k;
    if(scanf("%d %d %d %d", &a, &b,&c, &k)==EOF){return 0;}


    if(k <= a){printf("%d\n", k); return 0;}
    else if(a < k && k <= a+b){printf("%d\n", a); return 0;}
    else {printf("%d\n",2*a+b-k); return 0;} //a-(k-a-b)

}