//#include<iostream>
//using namespace std;
//
//int main() {
//	setlocale(0, "");
//	int M;
//	int k = 0;
//	cout << "¬ведите количество лопастей: ";
//	if ((cin >> M) and (M <= 2 * 10 ^ 9) and (M > 0)) {
//		for (int i = 0; i <= M; i++) {
//			if (((M - 3 * i) % 4 == 0) and ((M - 3*i) > 0)) {
//				cout << i << endl;
//				cout << ((M - 3 * i) / 4) << endl;
//				k += 1;
//				break;
//			}
//			else if (((M - 4 * i) % 3 == 0) and ((M - 4 * i) > 0)) {
//				cout << ((M - 4 * i) / 3) << endl;
//				cout << i << endl;
//				k += 1;
//				break;
//			}
//		}
//		if (k == 0) {
//			cout << 0 << endl;
//			cout << 0 << endl;
//		}
//	}
//	else {
//		cout << "ѕерезапустите программу и вводите положительные числа, не превышающие 2*10^9";
//	}
//	return 0;
//}