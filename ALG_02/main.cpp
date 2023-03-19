#include<iostream>
#include<stack>
using namespace std;


bool checkParity(string text) {

	stack<char> s;
	for (int i = 0; i < text.size(); i++)
	{
		if (text[i] == '(')
		{
			s.push(text[i]);
		}
		else if (text[i] == ')')
		{
			if (s.empty()) return false;
			s.pop();
		}

		if (!s.empty()) return false;
		
		return false;
	}

	/*
	int open = 0;
	int close = 0;
	for (int i = 0; i < text.size(); i++)
	{
		if (text[i] == '(')
		{
			open++;
		}
		else if (text[i] == ')')
		{
			close++;
		}

		if (close > open)
		{
			return false;
		}
	}

	if (open == close)
	{
		return true;
	}
	else
	{
		return false;
	}
	*/
}

int gcd(int m, int n) {
	if (n == 0) return m;
	
	return gcd(n, m % n);
}

int gcd_2(int m, int n) {
	
	while (n != 0)
	{
		int tmp = m;
		m = n;
		n = tmp % n;

	}
	return m;
}


int main() {
	string text = "() (())";
	cout << "Text is " << (checkParity(text) ? "OK" : "crappy") << "." << endl;

	cout << gcd_2(60, 24) << endl;
}