#include <stdio.h>

int main(void) {
        int input_s = 0;
        int output_s = 0;
        int output_m = 0;
        int output_h = 0;

        scanf("%d", &input_s);

        output_h = input_s / 3600;
        output_m = (input_s % 3600) / 60;
        output_s = (input_s % 3600) % 60;

        printf("%d:%d:%d\n",output_h, output_m, output_s);

        return 0;
}

