//#include <iostream>
//using namespace std;
//
//int perestanovka(int m, int n, int balls[]);
//int fact(int n);
//
//int perestanovka(int m, int n, int balls[])
//{
//	int result = 0;
//	if (m >= n)
//	{
//		if (balls[m - 1] == n)
//		{
//			result = 1;
//		}
//	}
//	else
//	{
//		for (int i = m; i <= n; i++)
//		{
//			if (balls[m - 1] == i)
//			{
//				result += fact(n - m);
//			}
//			else
//			{
//				int buf = balls[i - 1];
//				balls[i - 1] = balls[m - 1];
//				balls[m - 1] = buf;
//				result += perestanovka(m + 1, n, balls);
//				balls[m - 1] = balls[i - 1];
//				balls[i - 1] = buf;
//			}
//		}
//	}
//	return result;
//}
//
//int fact(int n)
//{
//	if (n > 1)
//	{
//		return n * fact(n - 1);
//	}
//	else
//	{
//		return 1;
//	}
//}
//int main()
//{
//	setlocale(0, "");
//	int n;
//	cout << "Введите количество шариков: ";
//	if ((cin >> n) and (n > 0)) {
//		int* balls = new int[n];
//		for (int i = 0; i < n; i++)
//		{
//			balls[i] = i + 1;
//		}
//
//		cout << "Ответ: " << perestanovka(1, n, balls) << endl;
//		delete[] balls;
//	}
//	else {
//		cout << "Перезапустите программу и введите число, больше нуля" << endl;
//	}
//	return 0;
//}