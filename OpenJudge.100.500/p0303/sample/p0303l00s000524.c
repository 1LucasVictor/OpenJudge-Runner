#include <stdio.h>
int n,k,line[1000000];
int binarysearch(int bw){
    int i,temp,t=1;
    for(i=0,temp=0;i<n;i++){
        if(line[i] > bw)
            return 0;
        if(temp+line[i] > bw){
            t++;
            temp=0;
        }
        temp+=line[i];
    }
    return t<=k;
}
int main(void){
    int left=0,right=1<<31,mid,i;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
        scanf("%d",&line[i]);
    for(right=~right;left<right;){
        mid=(right+left)/2;
        if(binarysearch(mid))
            right=mid;
        else
            left=mid+1;
    }
    printf("%d\n",right);
    return 0;
}
