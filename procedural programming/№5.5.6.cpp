//#include <iostream>
//#include <fstream>
//#include<string>
//#include <random>
//using namespace std;
//
//int isProst(int n) {
//    if ((n == 1 or n % 2 == 0 or n % 3 == 0 or n % 5 == 0) and (n != 2 and n != 3 and n != 5)) {
//        return 0;
//    }
//    else {
//        return n;
//    }
//}
//
//int main() {
//    setlocale(0, "");
//    auto* choose = new int;
//    cout << "�������� ���� ������:" << endl;
//    cout << "1. �������������� ���� ����� ������" << endl;
//    cout << "2. ������ ���� ����� ������" << endl;
//    if (cin >> *choose and *choose < 3 and *choose > 0) {
//        if (*choose == 1) {
//            delete choose;
//            random_device rd;
//            mt19937 rnd(rd());
//            uniform_int_distribution<int> dist(1, 10000);
//            ofstream fout1("����������� �����.txt");
//            for (int j = 0; j < 10; j++) {
//                if (j == 9) {
//                    fout1 << dist(rnd);
//
//                }
//                else {
//                    fout1 << dist(rnd) << endl;
//                }
//            }
//            fout1.close();
//        }
//        else if (*choose == 2) {
//            cout << "������� ����� ����� Enter" << endl;
//            delete choose;
//            int nums = 0;
//            ofstream fout1("����������� �����.txt");
//            for (int j = 0; j < 10; j++) {
//                if (cin >> nums and nums > 0) {
//                    if (j == 9) {
//                        fout1 << nums;
//                    }
//                    else {
//                        fout1 << nums << endl;
//                    }
//                }
//                else {
//                    cout << "�������� ����!" << endl;
//                    return 0;
//                }
//            }
//            fout1.close();
//        }
//        string tap, tap2;
//        auto* numbers = new int[10];
//        int s = 10;
//        auto* n = new int[s];
//        cout << endl << "����������� �����" << endl;
//        ifstream fin("����������� �����.txt");
//        int i = 0;
//        int max_c = -100000;
//        while (!fin.eof()) {
//            getline(fin, tap);
//            cout << tap << endl;
//            numbers[i] = stoi(tap);
//            if (stoi(tap) > max_c) {
//                max_c = stoi(tap);
//            }
//            i++;
//        }
//        fin.close();
//        cout << endl;
//        for (int m = 0; m < 10; m++) {
//            for (int j = 0; j < 9; j++) {
//                if (numbers[j] > numbers[j + 1]) {
//                    int b = numbers[j];
//                    numbers[j] = numbers[j + 1];
//                    numbers[j + 1] = b;
//                }
//            }
//        }
//        int max_l = -1000000000;
//        int min_l = 1000000000;
//        int* deliteli = new int[numbers[0]];
//        int y = 0;
//        for (int j = 1; j < numbers[0] + 1; j++) {
//            if (numbers[0] % j == 0) {
//                if (j > max_l) {
//                    max_l = j;
//                }
//                if (j < min_l) {
//                    min_l = j;
//                }
//                else {
//                    deliteli[y] = j;
//                    y++;
//                }
//            }
//        }
//        int max_d = -10000000;
//        int min_d = 100000000;
//        bool flag = true;
//        for (int c = 0; c < 10; c++) {
//            int cnt = 0;
//            if (flag) {
//                for (int d = 0; d < y; d++) {
//                    if (numbers[c] % deliteli[d] == 0) {
//                        if (deliteli[d] > max_d) {
//                            max_d = deliteli[d];
//                        }
//                        if (deliteli[d] < min_d) {
//                            min_d = deliteli[d];
//                        }
//                        cnt += 1;
//                    }
//                    else if (cnt != 0) {
//                        continue;
//                    }
//                    else {
//                        max_d = 1;
//                        min_d = 1;
//                        flag = false;
//                        break;
//                    }
//                }
//            }
//            else {
//                break;
//            }
//        }
//        cout << "min: " << min_d << endl;
//        cout << "max: " << max_d << endl;
//
//        int k = 0;
//        for (int j = 0; j < s; j++) {
//            if (isProst(numbers[j]) != 0) {
//                n[k] = isProst(numbers[j]);
//                k++;
//            }
//        }
//        cout << endl << "���������� ������� �����: " << k << endl;
//        cout << endl << "������� �����" << endl;
//        ofstream fout("������� �����.txt");
//        for (int j = 0; j < k; j++) {
//            fout << n[j] << endl;
//        }
//        fout.close();
//        ifstream fin2("������� �����.txt");
//        while (!fin2.eof()) {
//            getline(fin2, tap2);
//            cout << tap2 << endl;
//        }
//        delete[] numbers;
//        delete[] n;
//        return 0;
//    }
//    else {
//        delete choose;
//        cout << "������������� ��������� � ������� ����� 1 ��� 2" << endl;
//        return 0;
//    }
//}