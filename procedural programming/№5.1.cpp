//#include <iostream>
//using namespace std;
//
//int min(int a, int b) {
//    if (a > b) {
//        return b;
//    }
//    else {
//        return a;
//    }
//}
//
//int max(int a, int b) {
//    if (a > b) {
//        return a;
//    }
//    else {
//        return b;
//    }
//}
//
//// ������ ������
//int d_del(int a, int b) {
//    if (b == 0 and a == 0)
//        return 0;
//    else if(b == 0 and a != 0)
//        return a;
//    else if(b != 0 and a == 0)
//        return b;
//    return d_del(min(a, b), max(a, b) % min(a, b));
//}
//
//// ������ ������
//int d(int a, int b) {
//    if (b == 0 and a == 0)
//        return 0;
//    else if (b == 0 and a != 0)
//        return a;
//    else if (b != 0 and a == 0)
//        return b;
//    return d(min(a, b), max(a, b) - min(a, b));
//}
//
//int main() {
//    setlocale(0, "");
//    int a = 0, b = 0;
//    int *choose = new int;
//    cout << "������� ������ �����: ";
//    if (cin >> a) {
//        cout << "������� ������ �����: ";
//        if (cin >> b) {
//            cout << "����� �������� ���������?" << endl;
//            cout << "1. ��������, 2. ����������" << endl;
//            if (cin >> *choose) {
//                if (*choose == 1) {
//                    delete choose;
//                    cout << "d: " << d_del(a, b) << endl;
//                }
//                else if (*choose == 2) {
//                    delete choose;
//                        cout << "�����: " << d(a, b) << endl;
//                    }
//            }
//            else {
//                cout << "������� �����" << endl;
//            }
//        }
//        else {
//            cout << "������� �����" << endl;
//        }
//    }
//    else {
//        cout << "������� �����" << endl;
//    }
//    return 0;
//}