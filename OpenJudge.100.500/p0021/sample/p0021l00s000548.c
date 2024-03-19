#include <stdio.h>

#define INF 1000000000

#define N_MAX 6000
int data[N_MAX];
int n_data;

int get_max(void)
{
    int i,j; 
    int max=-INF;
    for(i=0;i<n_data;i++){
        int sum=0;
        for(j=i;j<n_data;j++){
            sum+=data[j]; 
            if(max<sum){ max=sum; }
        }
    }
    return max;
}
//#define DEBUG
int main(void)
{
    FILE* fp;
#ifdef DEBUG
    fp=fopen("input.txt","r");
#else
    fp=stdin;
#endif
    
    while(1){
        int n;
        fscanf(fp,"%d\n",&n);
        if(n==0){ break; }
        n_data=n;
        int i; 
        for(i=0;i<n;i++){
            fscanf(fp,"%d\n",data+i);
        }
        printf("%d\n",get_max());
    }
    return 0;
}