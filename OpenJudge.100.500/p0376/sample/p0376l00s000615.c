#include<stdio.h>
#include<string.h>

int main(void)
{
    char buffer[256];
    int n, input[100], counter=0, i;
    char *ptr;
    
    fgets(buffer, sizeof(int), stdin);
    sscanf(buffer, "%d", &n);
   
    fgets(buffer, sizeof(int)*100, stdin);
    ptr = strtok(buffer, " ");
    while(ptr!=NULL)
    {
        sscanf(ptr, "%d", &input[counter]);
        ptr = strtok(NULL, " ");
        counter++;
    }
    for(i=counter-1; i>=0; i--)
    {
        printf("%d", input[i]);
        if(i!=0) putchar(' ');
        else putchar('\n');
    }
    return(0);
}
