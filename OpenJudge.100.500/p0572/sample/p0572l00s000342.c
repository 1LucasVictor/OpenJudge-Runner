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

}