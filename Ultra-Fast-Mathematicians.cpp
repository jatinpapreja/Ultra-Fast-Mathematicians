#include<iostream>
using namespace std;
void convert(string a,string b)
{
    string c="";

    for(int i=0; b[i]!='\0'; i++)
    {
        if(a[i]!=b[i])
            c=c+"1";
        else
            c=c+"0";
    }
    cout<<c;
}
int main()
{
    int t;
    cin>>t;
    cin.get();
    while(t--)
    {
        string a="",b="";
        getline(cin,a,' ');
        getline(cin,b);
        convert(a,b);
        cout<<endl;
    }
    return 0;

}
