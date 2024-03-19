#include <stdio.h>

//#include <iostream>
//#include <vector>
//#include <string.h>

#pragma warning (push)
#pragma warning (disable : 4996)
#pragma warning (disable : 6031)
#define mod 1000000007;

//using namespace std;

int main()
{
    char S[3];

    scanf("%s", S);
    
    if (S[0] == S[1] && S[1] == S[2]) {
        printf("No");
    }
    else {
        printf("Yes");
    }
}

#pragma warning (pop)