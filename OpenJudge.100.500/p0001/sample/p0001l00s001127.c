#include<stdio.h>
int main(){
    int num[200][2]={},count=0,i=0,sum,a,ans,keta=0;
    while(scanf("%d %d",&num[count][0],&num[count][1])!=EOF){
        count++;
    }
    for(i=0;i<count;i++){
        sum=num[i][0]+num[i][1];
        keta=0;
        while(sum!=0){
            sum/=10;
            keta++;
        }
        printf("%d\n",keta);
    }
    return 0;
}
