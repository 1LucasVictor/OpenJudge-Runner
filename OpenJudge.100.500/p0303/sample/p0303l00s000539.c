#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,k,kei=0,tmp;
    scanf("%d %d",&n,&k);
    int *box = malloc(sizeof(int)*n);
    for(int i=0;i<n;i++){
        scanf("%d",&tmp);
        kei += tmp;
        box[i]=tmp;
    }
    int lf=1,rh=kei,st,cnt,x,flg;
    st = (lf+rh)/2;
    //fprintf(stderr,"chk1");
    while(1)
    {
        //printf("lf=%d,rh=%d\n",lf,rh);
        //printf("st=%d\n",st);
        x = st;
        flg = 0;
        cnt = 0;
        for(int i=0;i<n;i++)
        {
            //printf("iの数%d\n",i);
            if(x<box[i])
            {
                //printf("cnt++\n");
                cnt++;
                x = st;
                if(st < box[i]){
                    flg = 1;
                    break;
                }
                else x -= box[i];
            }else
            {
                //printf("not cnt++\n");
                x -= box[i];
            }
            //printf("x=%d\n",x);
            if(cnt == k){
                flg = 1;
                //printf("nuke\n");
                break;
            }
        }
        if(lf == rh) break;
        else {
            if(flg==1){
                lf = st+1;
            }else {
                rh = st;
            }
        }
        st = (rh+lf)/2;
    //fprintf(stderr,"while chk end");
    }
    printf("%d\n",rh);
}
