// ChyrunSofia8.1.4.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Lab_08_1.cpp
// < Чирун Софія >
// Лабораторна робота № 8.1.4
// Пошук та заміна символів у літерному рядку стандартними функціями мови С++ для рядків string
// Варіант 18

#include <iostream>
#include <string>
using namespace std;

int Count(const string s)
{
	int k = 0;
	size_t pos = 0;
	while ((pos = s.find('.', pos)) != -1)
	{
		pos++;
		k++;
	}
	return k;
}

int Count4Poit(const string s, int number)
{
	int a;
	a = size(s);
	if (size(s) < 0)
	   return 0;
	int k = 0, j = 0;
	if (number < 4) 
	{
	   cout << ". <4" << endl;
	   return 0;
	}
	else 
	{
	   for (int i = a - 1; i >= 0; i--)
		   if (s[i] == '.' && k < 4)
		   {
			  k++;
			  j = i;
		   }
	}
	return j;
}

string Change(string& s)
{
	size_t pos = 0;
	while ((pos = s.find('.', pos)) != -1)
		if (s[pos ] == '.')
		   s.replace(pos, 1, "**");
		else
		   pos++;
	return s;
}

int main()
{
	string str;
	int number;
	cout << "Enter string with '. >=4':" << endl;
		getline(cin, str);
		number = Count(str);
		cout << "String contained " << number << " groups of '. >=4'" << endl;
		cout << "Number i is " << Count4Poit(str, number) + 1 << endl;
	string dest = Change(str);
	cout << "Modified string (param) : " << str << endl;
	cout << "Modified string (result): " << dest << endl;
	return 0;
}
