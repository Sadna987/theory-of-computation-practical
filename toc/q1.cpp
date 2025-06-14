#include <iostream>
#include <string>
using namespace std;
void q0(string w,int i);
void q1(string w,int i);
void q2(string w,int i);
void q3(string w,int i);
void q0(string w,int i)
{
	cout<<"State 1"<<endl;
	if (i==w.length())
	{
		cout<<"String Rejected"<<endl;
		return;
	}
	else if (w[i]=='0')
	{
		q0(w,i+1);
	}
	else if (w[i]=='1')
	{
		q1(w,i+1);
	}
}
void q1(string w,int i)
{
	cout<<"State 2"<<endl;
	if (i==w.length())
	{
		cout<<"String Rejected"<<endl;
		return;
	}
	else if (w[i]=='0')
	{
		q0(w,i+1);
	}
	else if (w[i]=='1')
	{
		q2(w,i+1);
	}
	else 
	{
		return;
	}
}
void q2(string w,int i)
{
	cout<<"State 3"<<endl;
	if (i==w.length())
	{
		cout<<"String Rejected"<<endl;
		return;
	}
	else if (w[i]=='0')
	{
		q0(w,i+1);
	}
	else if (w[i]=='1')
	{
		q3(w,i+1);
	}
	else 
	{
		return;
	}
}
void q3(string w,int i)
{
	cout<<"State 4"<<endl;
	if (i==w.length())
	{
		cout<<"String Accepted"<<endl;
		return;
	}
	else 
	{
		q3(w,i+1);
	}
}
int main()
{
	string w;
	int i;
	cout<<"ENTER THE STRING:";
	cin>>w;
	q0(w,0);
	cout<<"STRING IS:"<<w;
}
	


