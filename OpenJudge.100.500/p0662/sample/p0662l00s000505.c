#include <stdio.h>

int main(){
    int a ,b,c,d,x=0,z=0;

    scanf("%d %d %d %d",&a,&b,&c,&d);

    if(b > c){
        if (a != 0){
            x = b - c ;
            printf("%d\n",x - a  );
        }
        else {
            printf("%d\n",b - c);
        }
    }
    else if (b < c){
        printf("0\n");
    }
return 0;
}
