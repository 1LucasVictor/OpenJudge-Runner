#include <stdio.h>

int main(int argc, char *argv[])
{
    int a;
    int b;
    char buf[128];

    if (argc == 3)
    {
        sscanf(argv[1], "%d", &a);
        sscanf(argv[2], "%d", &b);
    }

    if (argc == 1)
    {
        scanf("%d %d" , &a , &b);
        if(b == '\0')
        scanf("%d", &b);
    }

if(a<1||b<1) {
    printf(":(\n");
}
else if(a>=9||b>=9) {
    printf(":(\n");
}
else {
    printf("Yay!\n");
}
    return 0;
}
