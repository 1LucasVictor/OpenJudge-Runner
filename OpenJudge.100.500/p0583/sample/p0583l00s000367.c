#include <stdio.h>
int main(void){
    // Your code here!
    int N,A,B,C,D,goal;
    char S[200001];
    int twocount = 0, threecount = 0, twoflag = 0, threeflag = 0;
    scanf("%d %d %d %d %d",&N,&A,&B,&C,&D);
    scanf("%s",S);
    
    for(int i = A-1; i < B-2 && twoflag == 0; i++)
    {
        if(S[i] == '#')
        {
            twocount++;
            if(twocount >= 2)
                twoflag = 1;
        }
        else
        {
            twocount = 0;
        }
    }
    goal = (C>D)? C:D;
    for(int i = B-2; i <= goal-1 && twoflag == 0; i++)
    {
        if(S[i] == '#')
        {
            threecount = 0;
            twocount++;
            if(twocount >= 2)
                twoflag = 1;
        }
        else
        {
            twocount = 0;
            threecount++;
            if(threecount >= 3)
                threeflag = 1;
        }
    }
    
    if(C>D)
        printf("%s\n",(threeflag == 1 && twoflag == 0)? "Yes":"No");
    else
        printf("%s\n",(twoflag == 0)? "Yes":"No");
}
