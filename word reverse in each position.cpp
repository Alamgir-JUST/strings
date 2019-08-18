#include<bits/stdc++.h>
using namespace std;
/*
    Reverse every word in each position from a given sentence;
*/
int main()
{
    char str[1000];
    scanf("%[^\n]%*c", str);
    char ch[50][50];
    int j, k;
    j = k =0;
    for(int i=0; str[i]!='\0'; i++)
    {
        if(str[i] == ' ')
        {
            ch[k][j] = '\0';
            k++;
            j =0;
        }
        else
        {
            ch[k][j] = str[i];
            j++;
        }
    }
    ch[k][j] = '\0';

    for(int i=0; i<=k; i++)
    {
        int ln = strlen(ch[i]);

        for(int j=0, x=ln-1; j<x; j++, x--)
        {
            char temp = ch[i][j];
            ch[i][j] = ch[i][x];
            ch[i][x] = temp;
        }
    }

    for(int i=0; i<=k; i++)
    {
        cout<<ch[i]<<" ";
    }

    cout<<endl;
    return 0;
}
