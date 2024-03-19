#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<ctype.h>
#define mprint(x) printf(FORMATCONVERSION(x),(x))
#define FORMATCONVERSION(x) _Generic((x),\
                                    int:"%d",unsigned int:"%u",\
                                    double:"%lf",long long int:"%lld",\
                                    unsigned long long int:"%llu",\
                                    char :"%c",char*:"%s")

#define mswap(x,y) _Generic((x),int:swap_int,unsigned int:swap_uint,\
                            long long:swap_ll,unsigned long long:swap_ull)(&(x),&(y))

void swap_int(int *a,int *b){int tmp = *a;*a = *b;*b= tmp;return;}
void swap_uint(unsigned int *a,unsigned int *b){unsigned int tmp = *a;*a = *b;*b= tmp;return;}
void swap_ll(long long *a,long long *b){long long tmp = *a;*a = *b;*b= tmp;return;}
void swap_ull(unsigned long long *a,unsigned long long *b){unsigned long long tmp = *a;*a = *b;*b= tmp;return;}

int main(void){
    int h,a;
    scanf("%d %d",&h,&a);
    int ans;
    if(h % a == 0){
        ans = h / a;
    }else{
        ans = h / a;
        ++ans;
    }
    mprint(ans);
    return 0;
}