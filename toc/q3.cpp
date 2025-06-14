#include <iostream>
#include <string>
using namespace std;
void State1(string w,int i);
void State2(string w,int i);
void State3(string w,int i);
void State4(string w,int i);
void State5(string w,int i);
void State6(string w,int i);
void State7(string w,int i);
void State8(string w,int i);
void State9(string w,int i);
void State10(string w,int i);
void State11(string w,int i);
void State12(string w,int i);
void State13(string w,int i);
void State14(string w,int i);
void State15(string w,int i);

void State1(string w,int i)
{
	cout<<"STATE 1"<<endl;
	if (i==w.length() and w.length()<4)
	{
		cout<<"String is Rejected"<<endl;
		return;
	}
	else if (w[i]=='a')
	{
		State2(w,i+1);
	}
	else if (w[i]=='b')
	{
		State9(w,i+1);
	}
}
void State2(string w,int i)
{
	cout<<"STATE 2"<<endl;
	if (i==w.length())
	{
		cout<<"String is Rejected"<<endl;
		return;
	}
	else if (w[i]=='a')
	{
		State3(w,i+1);
	}
	else if (w[i]=='b')
	{
		State6(w,i+1);
	}
	else 
	{
		return;
	}
}
void State3(string w,int i)
{
	cout<<"STATE 3"<<endl;
	if (i==w.length())
	{
		cout<<"String is Rejected"<<endl;
		return;
	}
	else if (w[i]=='a')
	{
		State4(w,i+1);
	}
	else if (w[i]=='b')
	{
		State3(w,i+1);
	}
	else 
	{
		return;
	}
}
void State4(string w,int i)
{
	cout<<"STATE 4"<<endl;
	if (i==w.length())
	{
		cout<<"String is Rejected"<<endl;
		return;
	}
	else if (w[i]=='a')
	{
		State5(w,i+1);
	}
	else if (w[i]=='b')
	{
		State3(w,i+1);
	}
	else 
	{
		return;
	}
}
void State5(string w,int i)
{
	cout<<"STATE 5"<<endl;
	if (i==w.length())
	{
		cout<<"String is Accepted"<<endl;
		return;
	}
	else if (w[i]=='a')
	{
		State5(w,i+1);
	}
	else if (w[i]=='b')
	{
		State3(w,i+1);
	}
	else 
	{
		return;
	}
}
void State6(string w,int i)
{
	cout<<"STATE 6"<<endl;
	if (i==w.length())
	{
		cout<<"String is Rejected"<<endl;
		return;
	}
	else if (w[i]=='a')
	{
		State7(w,i+1);
	}
	else if (w[i]=='b')
	{
		State6(w,i+1);
	}
	else 
	{
		return;
	}
}
void State7(string w,int i)
{
	cout<<"STATE 7"<<endl;
	if (i==w.length())
	{
		cout<<"String is Rejected"<<endl;
		return;
	}
	else if (w[i]=='a')
	{
		State7(w,i+1);
	}
	else if (w[i]=='b')
	{
		State8(w,i+1);
	}
	else 
	{
		return;
	}
}
void State8(string w,int i)
{
	cout<<"STATE 8"<<endl;
	if (i==w.length())
	{
		cout<<"String is Accepted"<<endl;
		return;
	}
	else if (w[i]=='a')
	{
		State7(w,i+1);
	}
	else if (w[i]=='b')
	{
		State6(w,i+1);
	}
	else 
	{
		return;
	}
}
void State9(string w,int i)
{
	cout<<"STATE 9"<<endl;
	if (i==w.length())
	{
		cout<<"String is Rejected"<<endl;
		return;
	}
	else if (w[i]=='a')
	{
		State10(w,i+1);
	}
	else if (w[i]=='b')
	{
		State13(w,i+1);
	}
	else 
	{
		return;
	}
}
void State10(string w,int i)
{
	cout<<"STATE 10"<<endl;
	if (i==w.length())
	{
		cout<<"String is Rejected"<<endl;
		return;
	}
	else if (w[i]=='a')
	{
		State10(w,i+1);
	}
	else if (w[i]=='b')
	{
		State11(w,i+1);
	}
	else 
	{
		return;
	}
}
void State11(string w,int i)
{
	cout<<"STATE 11"<<endl;
	if (i==w.length())
	{
		cout<<"String is Rejected"<<endl;
		return;
	}
	else if (w[i]=='a')
	{
		State12(w,i+1);
	}
	else if (w[i]=='b')
	{
		State11(w,i+1);
	}
	else 
	{
		return;
	}
}
void State12(string w,int i)
{
	cout<<"STATE 12"<<endl;
	if (i==w.length())
	{
		cout<<"String is Accepted"<<endl;
		return;
	}
	else if (w[i]=='a')
	{
		State10(w,i+1);
	}
	else if (w[i]=='b')
	{
		State11(w,i+1);
	}
	else 
	{
		return;
	}
}
void State13(string w,int i)
{
	cout<<"STATE 13"<<endl;
	if (i==w.length())
	{
		cout<<"String is Rejected"<<endl;
		return;
	}
	else if (w[i]=='a')
	{
		State13(w,i+1);
	}
	else if (w[i]=='b')
	{
		State14(w,i+1);
	}
	else 
	{
		return;
	}
}
void State14(string w,int i)
{
	cout<<"STATE 14"<<endl;
	if (i==w.length())
	{
		cout<<"String is Rejected"<<endl;
		return;
	}
	else if (w[i]=='a')
	{
		State13(w,i+1);
	}
	else if (w[i]=='b')
	{
		State15(w,i+1);
	}
	else 
	{
		return;
	}
}
void State15(string w,int i)
{
	cout<<"STATE 15"<<endl;
	if (i==w.length())
	{
		cout<<"String is Accepted"<<endl;
		return;
	}
	else if (w[i]=='a')
	{
		State13(w,i+1);
	}
	else if (w[i]=='b')
	{
		State15(w,i+1);
	}
	else 
	{
		return;
	}
}
int main()
{
	string w;
	int i;
	cout<<"ENTER THE STRING:";
	cin>>w;
	State1(w,0);
	cout<<"STRING IS:"<<w;
}
	


