//#include <iostream>
//using namespace std;
//
//int is_Prost(int a) {
//    for (int i = 2; i * i <= a; i++) {
//        if (a % i == 0) {
//            return -1000000;
//        }
//    }
//    for (int j = 3; j * j <= a; j++) {
//        if (a % j == 0) {
//            return -1000000;
//        }
//    }
//    for (int k = 5; k * k <= a; k++) {
//         if (a % k == 0) {
//             return -1000000;
//         }
//    }
//        return a;
//    }
//
//int main() {
//    setlocale (0,"");
//    int end = 0;
//    cout << "������� �������� ����� ������������������ ������� � ���� ������������: ";
//    if (cin >> end) {
//        if (end > 0) {
//            if (end >= 2) {
//                for (int i = 2; i < end; i++) {
//                if (is_Prost(i) != -1000000) {
//                    cout << is_Prost(i) << endl;
//                }
//                }
//            }
//            else {
//                cout << "������������� ��������� � ������� �����, ������� � 2-�" << endl;
//            }
//        }
//        else {
//            cout << "������������� ��������� � ������� ����������� �����" << endl;
//        }
//    }
//    else {
//        cout << "������������� ��������� � ������� �����" << endl;
//    }
//    return 0;
//}