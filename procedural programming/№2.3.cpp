//#include <iostream>
//using namespace std;
//
//int main()
//{
//	setlocale(0, "");
//	float x, y, b;
//	cout << "Введите x:";
//	if (cin >> x) {
//		cout << "Введите y:";
//		if (cin >> y) {
//			cout << "Введите b:";
//			if (cin >> b) {
//				if (((b - y) > 0) and ((b - x) >= 0)) {
//					float F = (log(b - y)) * (sqrt(b - x));
//					cout << F;
//				}
//				else {
//					cout << "Нельзя посчитать";
//				}
//			}
//			else {
//				cout << "Перезапустите программу и вводите числа";
//			}
//		}
//		else {
//			cout << "Перезапустите программу и вводите числа";
//		}
//	}
//	else {
//		cout << "Перезапустите программу и вводите числа";
//	}
//	return 0;
//}