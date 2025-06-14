#include <iostream>
#include <string>


using namespace std;
void State1(string w,int i);
void State2(string w,int i);
void State3(string w,int i);
void State4(string w,int i);
void State5(string w,int i);
void State1(string w,int i)
{
	cout<<"STATE 1"<<endl;
	if (i==w.length())
	{
		cout<<"String is Rejected"<<endl;
		return;
	}
	else if (w[i]=='0')
	{
		State1(w,i+1);
	}
	else if (w[i]=='1')
	{
		State2(w,i+1);
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
	else if (w[i]=='0')
	{
		State2(w,i+1);
	}
	else if (w[i]=='1')
	{
		State3(w,i+1);
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
		cout<<"String is Accepted"<<endl;
		return;
	}
	else if (w[i]=='0')
	{
		State3(w,i+1);
	}
	else if (w[i]=='1')
	{
		State4(w,i+1);
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
		cout<<"String is Accepted"<<endl;
		return;
	}
	else if (w[i]=='0')
	{
		State4(w,i+1);
	}
	else if (w[i]=='1')
	{
		State5(w,i+1);
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
		cout<<"--------DEAD STATE-----"<<endl;
		return;
	}
	else if (w[i]=='0' or w[i]=='1')
	{
		State5(w,i+1);
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
	


