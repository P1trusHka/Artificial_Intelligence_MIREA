//#include<iostream>
//#include<conio.h>
//using namespace std;
//
//int main() {
//	setlocale(0, "");
//	int Mas[3][3], per = 0, size = 3;
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 3; j++) {
//			Mas[i][j] = rand(); //��������� ��������� ������ ���������� �������
//			cout << Mas[i][j] << "\t";
//		}
//		cout << endl;
//	}
//	for (int k = 0; k < 3; k++) {
//		for (int a = 1; a < size; a++) { //��������� �� ����������� (����������� ����������)
//			for (int b = size - 1; b >= a; b--) {
//				if (Mas[k][b - 1] > Mas[k][b]) {
//					per = Mas[a][b - 1];
//					Mas[k][b - 1] = Mas[k][b];
//					Mas[k][b] = per;
//				}
//			}
//		}
//	}
//	cout << endl;
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 3; j++) {
//			cout << Mas[i][j] << "\t";//������� ��������������� �� ������� ������� 
//		}
//		cout << endl;
//	}
//}