#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>
void print_int(int n)
{
    printf("%d\n",n);
}

void swap(int * a, int * b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

void sort(int a[], int n)
{
    for(int i = 1; i < n; i++)
    {
        int j = i-1;
        while(j >= 0 && a[j+1] > a[j])
        {
            swap(&a[j+1],&a[j]);
            j--;
        }
        
    }
    
}

void print_list(int a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        print_int(a[i]);
    }
    
}



int main(void)
{
    int a[6];
    int i,j;
    int flag = 0;
    for (i = 0; i < 6; i++)
    {
        scanf("%d", &a[i]);
    }
    
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            int abso = a[i] - a[j] < 0 ? a[j] - a[i] : a[i] - a[j];
            if(abso > a[5])
            {
                flag = 1;
                goto b;
            }

        }
        
    }
    b:
    if(flag)
        printf(":(");
    else
        printf("Yay!");
    
    

    
    return 0;
}

