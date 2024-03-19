#include <stdio.h>

int main(void) {

        int hours, minutes, seconds;

        

        scanf("%d", &seconds);

        

        hours = seconds / 3600;

        seconds %= 3600;

        minutes = seconds / 60;

        seconds %= 60;

        

        printf("%d:%d:%d\n", hours, minutes, seconds);

        return 0;

}
