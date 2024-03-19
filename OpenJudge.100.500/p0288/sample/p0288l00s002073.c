#include <stdio.h>
#include <stdlib.h>

void insertionSort(int*array,int i);

int main() {
    int arraySize;
    scanf("%d",&arraySize);
    int*insertedData=(int*)malloc(sizeof(int)*arraySize);

    for (int i=0;i<arraySize;i++)
        scanf("%d",&insertedData[i]);
    for (int j=0;j<arraySize;j++)
        printf("%d",insertedData[j]);
    printf("\n");
    //ソート
    for (int i=1;i<arraySize;i++)
    {
        insertionSort(insertedData,i);
        for (int j=0;j<arraySize;j++)
            printf("%d",insertedData[j]);

        printf("\n");
    }

    return 0;
}
void insertionSort(int* array,int insertedElementPoint)
{
    int v=array[insertedElementPoint];
    for (int i=insertedElementPoint-1;i>=0;i--)
    {
        //vがソートされた配列の端以上だったらブレーク
        if(v>=array[i])break;
        //ソートされた配列の端より小さかったら内側を外側に、内側にぶちこむ
        array[i+1]=array[i];
        array[i]=v;
    }
}
