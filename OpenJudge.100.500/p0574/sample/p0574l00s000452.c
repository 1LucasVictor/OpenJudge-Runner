    #include<stdio.h>
    #include<string.h>
    int main()
    {
    	char S[4];
    	scanf("%s",S);
    	if(S[0]==S[1] || S[2]==S[3] || S[1]==S[2])
    	{
    		printf("Bad\n");
    	}
    	else
    		printf("Good\n");
    	return 0;
    }