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
	void pop();
	int isempty();
	int PDA();
	void display(int flag);
};
int stacktype::PDA()
{
	int lgth,flag;
	char str[20];
	cout<<"ENTER THE STRING :";
	cin>>str;
	lgth=strlen(str);
    int i=0;
    flag=1;
	while (str[i]=='a')
    {
        cout<<"\nPUSH a";
        push('a');
        i++;
    }
    while (str[i]=='b')
    {
        if (isempty())
        {
            flag=0;
            break;
        }
        cout<<"\nPOP a";
        pop();
        i++;
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
void stacktype::pop()
{
	char del;
	del=stack[top];
	top--;
}
void stacktype::display(int flag)
{
	int emp;
	emp=isempty();
	if (emp==1 and flag==1)
		cout<<"\n STRING ACCEPTED";
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

