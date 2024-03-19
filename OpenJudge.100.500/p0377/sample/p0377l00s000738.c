int main(void)
{
    int cards[4][13];
    int n;
    char mark;
    int num;
     
    int i,j;
     
    for(i = 0;i < 13;i++){
        cards[0][i] = i + 1;
        cards[1][i] = i + 1;
        cards[2][i] = i + 1;
        cards[3][i] = i + 1;
    }
     
    scanf("%d\n",&n);
     
    for(i = 0;i < n;i++){
        if(i != n-1)scanf("%c %d\n",&mark,&num);
        else scanf("%c %d",&mark,&num);
        switch(mark){
            case 'S':
                cards[0][num-1] = 0;
                break;
            case 'H':
                cards[1][num-1] = 0;
                break;
            case 'C':
                cards[2][num-1] = 0;
                break;
            case 'D':
                cards[3][num-1] = 0;
                break;
        }
    }
     
    for(i = 0;i < 4;i++){
        for(j = 0;j < 13;j++){
            if(cards[i][j] != 0){
                switch(i){
                    case 0:
                        printf("S %d\n",cards[i][j]);
                        break;
                    case 1:
                        printf("H %d\n",cards[i][j]);
                        break;
                    case 2:
                        printf("C %d\n",cards[i][j]);                   
                        break;
                    case 3:
                        printf("D %d\n",cards[i][j]);
                        break;
                }
            }
        }
    }
    return 0;
}
