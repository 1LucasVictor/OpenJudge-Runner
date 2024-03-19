#include<stdio.h>
int main(){
        int a,b,c,temp;
        int i,j;
        int N;


        scanf("%d",&N);

        int k[N][3];

        i=0;

        while(scanf("%d %d %d",&a,&b,&c)!=EOF){
                if(a>b){
                temp=b;
                b=a;
                a=temp;
                }
                if(b>c){
                temp=c;
                c=b;
                b=temp;
                }

                k[i][0]=a;
                k[i][1]=b;
                k[i][2]=c;
                i++;
                if(N==i) break;

        }


        for(j=0;j<N;j++){
                if(k[j][2]*k[j][2]==k[j][1]*k[j][1]+k[j][0]*k[j][0]){
                printf("YES \n");
                }else{
                printf("NO \n");
                }
        }

        return 0;
}