//#include <iostream>
//using namespace std;
//
//int main()
//{
//	setlocale(0, "");
//	float a, b, c;
//	cout << "Введите a: ";
//	if (cin >> a) {
//		cout << "Введите b: ";
//		if (cin >> b) {
//			cout << "Введите c: ";
//			if (cin >> c) {
//				if (a != 0) {
//					int D = ((b * b) - (4 * a * c));
//					if (D > 0) {
//						float x1 = (((b * (-1)) + (sqrt(D))) / (2 * a));
//						cout << x1 << endl;
//						float x2 = (((b * (-1)) - (sqrt(D))) / (2 * a));
//						cout << x2 << endl;
//					}
//					else if (D == 0) {
//						float x = ((b * (-1)) / (2 * a));
//						cout << x << endl;
//					}
//					else {
//						cout << "Нет корней" << endl;
//					}
//				}
//				else {
//					if (b == 0 and c == 0) {
//						cout << "x - любое число" << endl;
//					}
//					else if (b == 0 and c != 0) {
//						cout << "Нет корней" << endl;
//					}
//					else if (b != 0 and c == 0) {
//						cout << " x = 0" << endl;
//					}
//					else {
//						float x = (c * (-1)) / b;
//						cout << "x = " << x << endl;
//					}
//				}
//			}
//			else {
//				cout << "Перезапустите программу и пишите числа" << endl;
//			}
//		}
//		else {
//			cout << "Перезапустите программу и пишите числа" << endl;
//		}
//	}
//	else {
//		cout << "Перезапустите программу и пишите числа" << endl;
//	}
//	return 0;
//}