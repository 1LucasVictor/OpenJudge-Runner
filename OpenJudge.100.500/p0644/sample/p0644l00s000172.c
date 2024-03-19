#include <stdio.h>

//#define MyPrint fprintf
#define MyPrint

int get_int1(void)
{
    int input;
    char ch;

    while (scanf("%d", &input) != 1) {
        while ((ch = getchar()) != '\n')
            putchar(ch);        // dispose of bad input
        MyPrint(stderr, " is not an integer.\nPlease enter an integer value.\n");
    }

    while (getchar() != '\n')   // discard rest of line
        continue;
    return input;
}

int main(int argc, char *argv[])
{
    int val1;
    int cnt = 0;
    int d3, d2, d1;

    MyPrint(stdout, "Please input integer value.\n");

    val1 = get_int1();
    if ((val1 < 0) || (val1 > 111)) {
        MyPrint(stdout, "your input number is error.\n");
        return -1;
    }
    MyPrint(stdout, "Your input value is %d.\n", val1);

    d3 = (val1 / 100);
    if ((d3 != 0) && (d3 != 1)) {
        MyPrint(stdout, "your input number is error.\n");
        return -1;
    }
    MyPrint(stdout, "d3=%d\n", d3);

    d2 = (val1 - d3 * 100) / 10;
    if ((d2 != 0) && (d2 != 1)) {
        MyPrint(stdout, "your input number is error.\n");
        return -1;
    }
    MyPrint(stdout, "d2=%d\n", d2);

    d1 = val1 - d3 * 100 - d2 * 10;
    if ((d1 != 0) && (d1 != 1)) {
        MyPrint(stdout, "your input number is error.\n");
        return -1;
    }
    MyPrint(stdout, "d1=%d\n", d1);

    cnt += ((val1 & 0x04) >> 2);
    cnt += ((val1 & 0x02) >> 1);
    cnt += (val1 & 0x01);

    MyPrint(stdout, "Your input result : ");
    fprintf(stdout, "%d\n", cnt);

    return 0;
}
