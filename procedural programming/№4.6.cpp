//#include <iostream>
//#include <string>
//using namespace std;
//int a(char x)
//{
//	switch (x)
//	{
//	case 'I':
//		return 1;
//	case 'V':
//		return 5;
//	case 'X':
//		return 10;
//	case 'L':
//		return 50;
//	case 'C':
//		return 100;
//	case 'D':
//		return 500;
//	case 'M':
//		return 1000;
//	}
//}
//
//int main()
//{
//	string s;
//	cin >> s;
//	int x = 0, f = 0;
//	for (int i = s.length() - 1; i >= 0; i--)
//	{
//		int c = a(s[i]);
//		if (c >= f)
//		{
//			f = c;
//		}
//		if (c == f)
//		{
//			x += c;
//		}
//		else
//		{
//			x -= c;
//		}
//	}
//	cout << x;
//	return 0;
//}