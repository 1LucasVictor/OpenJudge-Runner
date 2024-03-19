#include <stdio.h>

int main(){
    int a,b,c,d,v=0;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    if((c>=a)&&(c<=b)){
        if(d<b)
            v=d-c;
        else
            v=b-c;
    }
    if((a>=c)&&(a<=d)){
        if(b<d)
            v=b-a;
        else
            v=d-a;
    }
    printf("%d\n",v);

    return 0;
}
