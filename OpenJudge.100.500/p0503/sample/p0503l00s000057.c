#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int i;
    int n;

    scanf("%d", &n);
    //printf("n = %d\n", n);
    char c[n*10^10];
    int num[n];

    for (i=0;i<n;i++)
    {
    scanf("%s", c);
    //printf("c = %s \n", c);
    num[i]= atoi(c);
    //printf("num = %d \n", num[i]);
    }
    int j;
    for (i= 0;i<n-1;i++)
    {
        for (j=i+1;j<n;j++)
        {
            if(num[i]==num[j])
            {
                printf("NO");
                return 0;
            }
        }
    }
    printf("YES");
    //scanf("%s", c);
    //printf("c = %s\n", c);
    return 0;
}