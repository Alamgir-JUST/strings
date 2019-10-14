#include<bits/stdc++.h>
using namespace std;
int num = 0;
void perm(string s, int l, int r)
{
    if(l == r)
    {
        num++;
        cout<<s<<endl;
    }
    else
    {
        for(int i=l; i<=r; i++)
        {
            swap(s[l], s[i]);

            perm(s, l+1, r);

            swap(s[l], s[i]);
        }
    }
}
int main()
{
    string s;
    cout<<"Enter the string for finding permutation: "<<endl;
    cin>>s;

    int n = s.size();
    cout<<"All permutation are: "<<endl;
    perm(s, 0, n-1);
    cout<<"Total permutation is : "<<num<<endl;

    return 0;
}

/*
Enter the string for finding permutation:
ABCD
All permutation are:
ABCD
ABDC
ACBD
ACDB
ADCB
ADBC
BACD
BADC
BCAD
BCDA
BDCA
BDAC
CBAD
CBDA
CABD
CADB
CDAB
CDBA
DBCA
DBAC
DCBA
DCAB
DACB
DABC
Total permutation is : 24
*/
