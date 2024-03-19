#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n,i,j,k,l,count=0;
    while(scanf("%d",&n)!=EOF){
        count=0;
        if(n>37)
            printf("0\n");
        else{
            for(i=0;i<=9;i++)
                for(j=0;j<=9;j++)
                    for(k=0;k<=9;k++)
                        for(l=0;l<=9;l++)
                            if(i+j+k+l==n)
                                count++;
        }
        printf("%d\n",count);
    }
    return 0;
}