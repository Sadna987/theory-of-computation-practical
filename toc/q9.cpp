#include <iostream>
#include <cstring>
using namespace std;

int TM(string s,int lgt)
{
    int flag=1,i=0;
    while(i<lgt)
    {
        i=0;
        while (s[i]!='a' and i<lgt)
        {
            i++;
        }
        cout<<s<<endl;
        s[i]='d';
        while (s[i]!='b' and i<lgt)
        {
            i++;
        }
        cout<<s<<endl;
        s[i]='d';
        while (s[i]!='c' and i<lgt)
        {
            i++;
        }
        cout<<s<<endl;
        s[i]='d';
    }
    i=0;
    while(i<lgt)
    {
        if (s[i]=='d')
        {
            i++;
        }
        else
        {
            flag=0;
            break;
        }
    } 
    return flag;
}
int main()
{
    char str[100];
    int flg;
    cout<<"\nENTER THE STRING :";
    cin>>str;
    int lgth;
    lgth=strlen(str);
    flg=TM(str,lgth);
    if (flg==1)
    {
        cout<<"\nSTRING ACCEPTED";
    }
	else 
	{
		cout<<"\nSTRING NOT ACCEPTED";
	}
}