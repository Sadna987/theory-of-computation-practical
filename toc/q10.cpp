#include <iostream>
#include <cstring>
using namespace std;

string incrementBinary(string s,int lgt)
{
    int head=lgt-1;
    bool carry=true;
    while (head>=0 and carry)
    {
        if (s[head]=='0')
        {
            s[head]='1';
            carry=false;
        }
        else if (s[head]=='1')
        {
            s[head]='0';
        }
        head--;
    }
    if (carry)
    {
        s='1'+s;
    }
    return s;
}
int main()
{
    char str[100];
    string s;
    cout<<"\nENTER THE STRING :";
    cin>>str;
    int lgth;
    lgth=strlen(str);
    s=incrementBinary(str,lgth);
    cout<<s<<endl;
}