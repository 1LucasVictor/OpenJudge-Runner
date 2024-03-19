#include <stdio.h>
#include <stdlib.h>

int main(){

    int time; //input time[s]
    div_t o1; //output1
    div_t o2; //output2
    int h; //output hours
    int m; //output minutes
    int s; //output seconds

    scanf("%d", &time);

    o1 = div(time,3600);
    o2 = div(o1.rem,60);

    h = o1.quot; //quotient part of time[s]/3600
    m = o2.quot; //quotient part of o.rem[s]/60
    s = o2.rem; //remainder part of o.rem[s]/60

    printf("%d:%d:%d\n",h,m,s);

    return 0;

}