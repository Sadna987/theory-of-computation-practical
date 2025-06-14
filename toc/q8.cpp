#include <iostream>
#include <cstring>
using namespace std;
class stacktype
{
	char stack[20];
	int top;
	public:
	stacktype()
	{
		top=-1;
	}
	void push(char ele);
	int pop();
	int isempty();
	int PDA();
	void display(int flag);
};
int stacktype::PDA()
{
	int lgth,flag,p;
	char str[20];
	cout<<"ENTER THE STRING in (wXwr) form:";
	cin>>str;
	lgth=strlen(str);
    int i=0;
    flag=1;
	while (str[i]=='a' or str[i]=='b')
    {
        if (str[i]=='a')
        {
            cout<<"\nPUSH a";
            push('a');
            i++;
        }
        else if (str[i]=='b')
        {
            cout<<"\nPUSH b";
            push('b');
            i++;
        }
    }
    i++;
    while (str[i]=='a' or str[i]=='b')
    {
        if (isempty())
        {
            flag=0;
            break;
        }
        else if(str[i]=='a')
        {
            p=pop();
            if (p=='a')
            {
                cout<<"\nPOP a";
                i++;
            }
            else 
            {
                flag=0;
                break;
            }
        }
        else if(str[i]=='b')
        {
            p=pop();
            if (p=='b')
            {
                cout<<"\nPOP b";
                i++;
            }
            else 
            {
                flag=0;
                break;
            }
        }
    }
    return flag;
}
int stacktype::isempty()
{
	if (top==-1)
		return 1;
	else 
		return 0;
}
void stacktype::push(char ele)
{
	top++;
	stack[top]=ele;
}
int stacktype::pop()
{
	char del;
	del=stack[top];
	top--;
    return del;
}
void stacktype::display(int flag)
{
	int emp;
	emp=isempty();
	if (emp==1 and flag==1)
		cout<<"\nSTRING ACCEPTED";
	else 
	{
		cout<<"\nSTRING NOT ACCEPTED";
	}
}
int main()
{
    int flg;
	stacktype s;
	flg=s.PDA();
	s.display(flg);
}

