#include <stdio.h>
 
int main(void){
    int n,i,num,s[13]={0},h[13]={0},c[13]={0},d[13]={0};
    char ch;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("\n%c %d",&ch,&num);
        switch(ch){
            case 'S':s[num-1]++;break;
            case 'H':h[num-1]++;break;
            case 'C':c[num-1]++;break;
            case 'D':d[num-1]++;break;
        }
    }
        for(i=0;i<13;i++)
            if(s[i] != 1)
                printf("S %d\n",i+1);
        for(i=0;i<13;i++)
            if(h[i] != 1)
                printf("H %d\n",i+1);
        for(i=0;i<13;i++)
            if(c[i] != 1)
                printf("C %d\n",i+1);
        for(i=0;i<13;i++)
            if(d[i] != 1)
                printf("D %d\n",i+1);
        return 0;
}
