//#include <iostream>
//using namespace std;
//
//int factorial(int n) {
//    int res = 1;
//    for (int i = 1; i < n+1; i++) {
//        res *= i;
//    }
//    return res;
//}
//
//double down(int n) {
//    double Sum = 0;
//    for (int i = 1; i < n*2; i = i + 2) {
//        Sum += (1. / i) - (1. / (i + 1));
//    }
//    Sum += 1;
//    return Sum;
//}
//
//int main() {
//    setlocale(0, "");
//    int n = 0;
//    cout << "������� ����� n: ";
//    if ((cin >> n) and (n > 0)) {
//        cout << "�����: " << 1./down(n) << endl;
//    }
//    else {
//        cout << "������������� ��������� � ������� �����, ������� ����" << endl;
//    }
//    return 0;
//}