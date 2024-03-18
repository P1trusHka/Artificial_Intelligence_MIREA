//#include<iostream>
//#include<fstream>
//#include<string>
//using namespace std;
//
//int main() {
//	setlocale(0, "");
//	ifstream f;
//	string line, c_word, max_word;
//	f.open("C:\\Users\\User\\Desktop\\asdf.txt");
//	getline(f, line);
//	int C = (int)line.size();
//	int Max_len = -1000000, count = 0, k = 0, m = 0;
//	for (int i = 0; i < C; i++) {
//		if (line[i] != ' ') {
//			count += 1;
//			c_word += line[i];
//		}
//		else {
//			k += 1;
//			if (k == 1) {
//				if (count > Max_len) {
//					Max_len = count;
//					max_word = c_word;
//
//				}
//			count = 0;
//			k = 0;	
//			c_word.clear();
//			}
//		}
//	}
//	cout << Max_len << endl;
//	cout << max_word << endl;
//	cout << (int)line.size();
//	f.close();
//	return 0;
//}