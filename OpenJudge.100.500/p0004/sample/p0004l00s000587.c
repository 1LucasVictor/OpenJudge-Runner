#include <stdio.h>

#define MIN(a,b) (((a)>(b))?(b):(a))

int main(void)
{
    //for debug
    FILE *fin, *fout;
//#define DEBUG
#ifdef DEBUG
    fin=fopen("input.txt","r");
    fout=fopen("output.txt","w");
#else
    fin=stdin; fout=stdout;
#endif

    //process all input data
    while(feof(fin)==0){
        int a,b;
        fscanf(fin,"%d %d\n",&a,&b);
        int i;
        //gcd is at least 1
        long long int gcd=1,lcm;
        //divider is 1..Minimum(a,b)
        for(i=1;i<MIN(a,b);i++){
            if(a%i==0 && b%i==0){ gcd=i; }
        }
        //calc lcm
        lcm=gcd*(a/gcd)*(b/gcd);
        //write result
        fprintf(fout,"%lld %lld\n",gcd,lcm);
    }


    return 0;
}