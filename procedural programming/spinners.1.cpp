//#include<iostream>
//using namespace std;
//
//int main() {
//	setlocale(0, "");
//	int A, B, C;
//	cout << "������� ��������� ��������� ��������:";
//	if ((cin >> A) and (A <= 2 * 10 ^ 9) and (A > 0)) {
//		cout << "������� ��������� ����� ������� ��������:";
//		if ((cin >> B) and (B <= 2 * 10 ^ 9) and (B > 0)) {
//			cout << "������� ������������ ��������� ��������:";
//			if ((cin >> C) and (C <= 2 * 10 ^ 9) and (C > 0)) {
//				int K = 0;
//				for (int i = 1; i < C; i++) {
//					if ((B * i) <= (C - A)) {
//						K += 1;
//					}
//				}
//				cout << "������������ ����� �������� ����� " << K;
//			}
//			else {
//				cout << "������������� ��������� � ������� ������������� �����, �� ����������� 2*10^9";
//			}
//		}
//		else {
//			cout << "������������� ��������� � ������� ������������� �����, �� ����������� 2*10^9";
//		}
//	}
//	else {
//		cout << "������������� ��������� � ������� ������������� �����, �� ����������� 2*10^9";
//	}
//	return 0;
//}