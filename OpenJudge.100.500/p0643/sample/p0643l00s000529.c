#include <stdio.h>

//#define MyPrint fprintf
#define MyPrint


int get_int2(int *in1, int *in2)
{
    char ch;

    if ((in1 == NULL) || (in2 == NULL))
        return -1;

    while (scanf("%d %d", in1, in2) != 2) {
        while ((ch = getchar()) != '\n')
            putchar(ch);        // dispose of bad input
        MyPrint(stderr, " is not an integer.\nPlease enter an integer value.\n");
    }

    while (getchar() != '\n')   // discard rest of line
        continue;
    return 0;
}

int main(int argc, char *argv[])
{
    int val1, val2;
    int vmul;

    MyPrint(stdout, "Please input integer value.\n");
    
    get_int2(&val1, &val2); 
    if ((val1 < 1) || (val1 > 10000)) {
        MyPrint(stdout, "your input number is error.\n", val1);
        return -1;
    }
    val1 = (int)val1;

    if ((val2 < 1) || (val2 > 10000)) {
        MyPrint(stdout, "your input number is error.\n", val2);
        return -1;
    }
    val2 = (int)val2;

    MyPrint(stdout, "Your input value is %d %d\n", val1, val2);

    MyPrint(stdout, "Your input result : ");

    vmul = val1 * val2;
    MyPrint(stdout, "%d\n", vmul);

    if (vmul % 2 == 0) {
        //fprintf(stdout, "Odd\n");
        fprintf(stdout, "Even\n");
    }
    else {
        //fprintf(stdout, "Even\n");
        fprintf(stdout, "Odd\n");
    }
    return 0;
}
