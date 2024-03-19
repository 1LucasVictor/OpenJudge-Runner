#include <stdio.h>

int read(int *a)
{
    int h,w;
    scanf("%d %d", &h, &w);
    if(h == 0 && w == 0)
        return 0;
    a[0] = h;   a[1] = w;
    return 1;
}

void printFrame(int *a)
{
    int i, j;
    for(i=0;i<a[0];i++) {
        if(i == 0 || i == a[0]-1) {
            for(j=0;j<a[1];j++)
                putchar('#');
            putchar('\n');
        }
        else {
            for(j=0;j<a[1];j++) {
                if(j == 0 || j == a[1]-1)
                    putchar('#');
                else
                    putchar('.');
            }
            putchar('\n');
        }
    }
}

int main(void)
{
    int i, idx = 0;
    int data[100][2];

    while(read(data[idx++]) != 0);

    for(i=0;i<idx-1;i++) {
        printFrame(data[i]);
        putchar('\n');
    }

    return 0;
}