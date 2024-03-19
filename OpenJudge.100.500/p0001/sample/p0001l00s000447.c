#include <stdio.h>
 
int main(){
    int a,b,c,d,i;
    while (scanf("%d %d\n",&a,&b) !=EOF){
        c=a+b;
        d=1;
        if (c==0) {printf("1\n");}
        else {for (i=1;i<=7;i++) {
            if (c<d*10 && c>=d) {printf("%d\n",i);}
            d*=10;
        }
        }
    }
    return 0;
}