//#include<iostream>
//#include<cmath>
//using namespace std;
//
//double TriangleArea(double a, double h)
//{
//	double S;
//	S = 0.5 * a * h;
//	return S;
//}
//double RectagleArea(double a, double b)
//{
//	double S;
//	S = a * b;
//	return S;
//}
//double CircleArea(double r)
//{
//	double S, p = 3.14;
//	S = p * r * r;
//	return S;
//}
//int main()
//{
//	setlocale(0, "");
//	double a, h, r;
//	cout << "a = ";
//	if ((cin >> a) and (a > 0)) {
//		cout << "h = ";
//		if ((cin >> h) and (h > 0)) {
//			cout << "r = ";
//			if ((cin >> r) and (r > 0)) {
//				cout << TriangleArea(a, h) << endl;
//				cout << RectagleArea(a, h) << endl;
//				cout << CircleArea(r) << endl;
//			}
//			else {
//				cout << "Перезапустите программу и введите числа, большие нуля" << endl;
//			}
//		}
//		else {
//			cout << "Перезапустите программу и введите числа, большие нуля" << endl;
//		}
//	}
//	else {
//		cout << "Перезапустите программу и введите числа, большие нуля" << endl;
//	}
//	return 0;
//}