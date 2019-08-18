#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch[100];
    scanf("%[^\n]%*c",ch);
    for(int i=strlen(ch)-1; i>=0; i--){
        if(ch[i] == ' '){
            ch[i] = '\0';

            printf("%s ",&(ch[i]) +1);
        }
    }
    cout<<ch<<endl;
    return 0;
}
