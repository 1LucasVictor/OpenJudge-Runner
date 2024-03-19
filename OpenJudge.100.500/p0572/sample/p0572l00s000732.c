#include<stdio.h>
#include<stdlib.h>
#include<math.h>

//降順
int compare_int(const void *a, const void *b)
{
    return *(int*)a - *(int*)b;
}

int main(){
    int L,R;
    scanf("%d %d",&L,&R);
    L=L%2019;
    R=R%2019;
    int x[(R-L)*(R-L)];
    int count=0;
    for(int i=L;i<R;i++){
        for(int j=L+1;j<R+1;j++){
            x[count]=(i*j)%2019;
            count++;
        }
    }
    qsort(x,(R-L)*(R-L),sizeof(int),compare_int);
    printf("%d\n",x[0]);

/*
    count=0;
    for(int i=L;i<R;i++){
        for(int j=L+1;j<R+1;j++){
            printf("x[%d]=%d\n",count,x[count]);
            count++;
        }
    }
*/
}