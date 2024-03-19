#include <stdio.h>
 
int main()
{
    char c;
 
    fscanf(stdin, "%c", &c);
 
    while (c != '\n') {
        if (c >= 'A' && c <= 'Z') {
            c = c + ('a' - 'A');
        } else if (c >= 'a' && c <= 'z') {
            c = c + ('A' - 'a');
        }
        fprintf(stdout, "%c", c);
        fscanf(stdin, "%c", &c);
    }
    putchar('\n');
 
    return 0;
}