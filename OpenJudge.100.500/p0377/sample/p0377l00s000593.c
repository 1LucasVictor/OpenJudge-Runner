int main(int argc, const char * argv[]) {
    
    int card[4][13] = {};
    char color[4] = {'S','H','C','D'};
    
    int n;
    scanf("%d",&n);
    
    int i;
    for(i=0;i<n;i++){
        char c;
        int a;
        scanf(" %c %d",&c,&a);
        
        switch (c) {
            case 'S':
                card[0][a-1] = 1;
                break;
            case 'H':
                card[1][a-1] = 1;
                break;
            case 'C':
                card[2][a-1] = 1;
                break;
            case 'D':
                card[3][a-1] = 1;
                break;
            default:
                break;
        }
    }
    
    int j;
    for(i=0;i<4;i++){
        for(j=0;j<13;j++){
            if(card[i][j] == 0){
                printf("%c %d\n",color[i],j+1);
            }
            
        }
    }
    
    return 0;
}