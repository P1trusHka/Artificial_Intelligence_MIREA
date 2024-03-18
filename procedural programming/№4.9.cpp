//#include <iostream>
//#include <stdio.h>
//#include <cmath>
//using namespace std;
//
//
//char int_symbol(int in) {
//	char out[] = { '0','1','2','3','4','5','6','7','8','9',
//	'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P',
//	'Q','R','S','T','U','V','W','X','Y','Z' };
//	return out[in];
//}
//
//int char_symbol(char in) {
//	char out[] = { '0','1','2','3','4','5','6','7','8','9',
//	'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P',
//	'Q','R','S','T','U','V','W','X','Y','Z' };
//	for (int i = 0; i < strlen(out); i++)
//	{
//		if (out[i] == in) return i;
//	}
//}
//
//int ToDec(char st[10])
//{
//	int i, s, p, ss;
//	s = 0;
//	p = strlen(st) - 1;
//	cout << "Введите СС " << endl;
//	cin >> ss;
//	for (i = 0; st[i] != '\0'; i++)
//	{
//		s = s + char_symbol(st[i]) * pow(ss, p);
//		p--;
//	}
//	return s;
//
//}
//
//int main()
//{
//	setlocale(0, "");
//	int chislo10 = 0;
//	int ss = 5;
//	char chislo[10];
//	cout << "введите число " << endl;
//	cin >> chislo;
//	chislo10 = ToDec(chislo);
//	cout << "число в 10 СС = " << chislo10 << endl;
//	int c[50];
//	int ss2, i = 0;
//	cout << "введите конечную СС" << endl;
//	cin >> ss2;
//	div_t n;
//	n = div(chislo10, ss2);
//	c[i] = n.rem;
//	while (n.quot != 0)
//	{
//		i++;
//		n = div(n.quot, ss2);
//		c[i] = n.rem;
//	}
//	cout << "число в заданной СС = " << endl;
//	for (i; i >= 0; i--)
//	{
//		cout << int_symbol(c[i]);
//	}
//	system("pause");
//	return 0;
//}