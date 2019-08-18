#include<bits/stdc++.h>
using namespace std;
void revFunc(char *str)
{
    if(*str)
    {
        revFunc(str+1);
        cout<<*str;
    }
}
int main()
{
    char c[100];
    scanf("%[^\n]%*c", c);
    revFunc(c);
    cout<<endl<<c<<endl;
    return 0;
}
