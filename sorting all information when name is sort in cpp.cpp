#include<bits/stdc++.h>
using namespace std;
struct university
{
    string name;
    double cgpa;
    int roll;
};
void input(struct university s[], int n)
{
    cout<<"Enter "<<n<<" students name, cgpa, roll one by one: "<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>s[i].name>>s[i].cgpa>>s[i].roll;

    }
}
void nameSort(struct university s[], int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(s[i].name>s[j].name)
            {
                struct university temp;
                temp.name = s[i].name;
                temp.cgpa = s[i].cgpa;
                temp.roll = s[i].roll;


                s[i].name = s[j].name;
                s[i].cgpa = s[j].cgpa;
                s[i].roll = s[j].roll;


                s[j].name = temp.name;
                s[j].cgpa = temp.cgpa;
                s[j].roll = temp.cgpa;
            }
        }
    }
}
void output(struct university s[], int n)
{
    cout<<"All students information after sorting name in dictionary order: "<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<s[i].name<<"\t"<<s[i].cgpa<<"\t"<<s[i].roll<<endl;
    }
}
int main()
{
    int n;
    cout<<"Enter the number of students: ";
    cin>>n;
    struct university s[n];
    input(s, n);
    nameSort(s, n);
    output(s, n);
    return 0;
}
