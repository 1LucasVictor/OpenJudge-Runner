#include <stdio.h>

int main(){
    int n,m,k;
    scanf("%d%d%d",&n,&m,&k);
    int a[200010]={0},b[200010]={0};
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    for(int i=0;i<m;i++) scanf("%d",&b[i]);
    int count_a=0;
    int time_a=0;
    while(a[count_a]!=0){
        time_a+=a[count_a];
        if(time_a>k) break;
        count_a++;
    }

    int count_max=0;
    for(int i=0;i==0||i<count_a;i++){
        int count=0;
        int time=0;
        for(int j=0;j<=i;j++){
            time+=a[j];
            count++;
        }
        int j=0;
        while(b[j]!=0){
            time+=b[j];
            if(time>k) break;
            count++;
            j++;
        }
        if(count>count_max){
            count_max=count;
        }
    }
    printf("%d",count_max);
    return 0;
}