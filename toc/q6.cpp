#include <iostream>
#include <string>

using namespace std;

void q1(string w, int i);
void q2(string w, int i);
void q3(string w, int i);
void q4(string w, int i);
void q5(string w, int i);

void q1(string w, int i)
{
	if (i == w.length())
	{
		cout << "String Rejected";
		return;
	}

	if (w[i] == 'a')
		q2(w, i + 1);
	else if (w[i] == 'b')
		q3(w, i + 1);
}

void q2(string w, int i)
{
	if (i == w.length())
	{
		cout << "String Accepted";
		return;
	}
	if (w[i] == 'a')
		q4(w, i + 1);
	else if (w[i] == 'b')
		q3(w, i + 1);
}
void q3(string w, int i)
{
	if (i == w.length())
	{
		cout << "String Accepted";
		return;
	}
	if (w[i] == 'a')
		q2(w, i + 1);
	else if (w[i] == 'b')
		q3(w, i + 1);
}
void q4(string w, int i)
{
	if (i == w.length())
	{
		cout << "String Accepted";
		return;
	}
	if (w[i] == 'a')
		q4(w, i + 1);
	else if (w[i] == 'b')
		q5(w, i + 1);
}
void q5(string w, int i)
{
	if (i == w.length())
	{
		cout << "String Accepted";
		return;
	}
	if (w[i] == 'a')
		q4(w, i + 1);
	else if (w[i] == 'b')
		q5(w, i + 1);
}

void r1(string w, int i);
void r2(string w, int i);
void r3(string w, int i);
void r4(string w, int i);
void r5(string w, int i);
void r6(string w, int i);

void r1(string w, int i)
{
	if (i == w.length())
	{
		cout << "String Rejected";
		return;
	}

	if (w[i] == 'a')
		r1(w, i + 1);
	else if (w[i] == 'b')
		r2(w, i + 1);
}

void r2(string w, int i)
{
	if (i == w.length())
	{
		cout << "String Accepted";
		return;
	}
	if (w[i] == 'a')
		r3(w, i + 1);
	else if (w[i] == 'b')
		r2(w, i + 1);
}
void r3(string w, int i)
{
	if (i == w.length())
	{
		cout << "String Rejected";
		return;
	}
	if (w[i] == 'a')
		r4(w, i + 1);
	else if (w[i] == 'b')
		r2(w, i + 1);
}
void r4(string w, int i)
{
	if (i == w.length())
	{
		cout << "String Rejected";
		return;
	}
	if (w[i] == 'a')
		r4(w, i + 1);
	else if (w[i] == 'b')
		r5(w, i + 1);
}
void r5(string w, int i)
{
	if (i == w.length())
	{
		cout << "String Accepted";
		return;
	}
	if (w[i] == 'a')
		r6(w, i + 1);
	else if (w[i] == 'b')
		r5(w, i + 1);
}
void r6(string w, int i)
{
	if (i == w.length())
	{
		cout << "String Rejected";
		return;
	}
	if (w[i] == 'a')
		r4(w, i + 1);
	else if (w[i] == 'b')
		r5(w, i + 1);
}

int main()
{
	string w;
	cout << "\nEnter the string(in a & b):";
	cin >> w;
	int c;
	cout << "\nL1: Accepting atleast 'aa'\nL2: Ends with b ";
	cout << "\n1.Union of two languages . \n2.Concatenation of two languages\n";
	cin >> c;
	if (c == 1)
	{
		q1(w, 0);
	}
	else if (c == 2)
	{
		r1(w, 0);
	}
	return 0;
}
