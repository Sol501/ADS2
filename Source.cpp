#include <iostream>
#include <vector>
#include <string>

using namespace std;

void compressed(string st)
{
	vector<pair<int, char>> v;
	int c = 1;
	char ch = st[0];
	int size = st.length();
	for (int i = 1; i < size; i++)
	{
		if (ch == st[i])
			c++;
		else
		{
			v.push_back(make_pair(c, ch));
			ch = st[i];
			c = 1;
		}
	}
	v.push_back(make_pair(c, ch));
	size = v.size();
	system("cls");
	for (int i = 0; i < size; i++)
	{
		cout <<v[i].first << " ";
	}
	cout << "\n\n";
}

void binary(string st,int first)
{
	int count;
	int size = st.length();
	system("cls");
	for (int i = 0; i < size; i++)
	{
		count = st[i] - '0';
		for (int j = 0; j < count; j++)
		{
			(first == 1) ? cout << "1" : cout << "0";
		}
		(first == 1) ? first = 0: first = 1;
	}
	cout << "\n\n";
}

void main()
{
	cout << "Enter the binary number : ";
	string st;
	cin >> st;
	compressed(st);
	cout << "Enter the copressed version of a binary number : ";
	cin >> st;
	cout << "\nEnter the first number of the binary number : ";
	int f;
	cin >> f;
	binary(st,f);
	system("pause");
}