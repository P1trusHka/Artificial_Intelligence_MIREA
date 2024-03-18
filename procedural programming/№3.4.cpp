//#include <iostream>
//#include <string>
//#include <fstream>
//using namespace std;
//
//int main() {
//    setlocale(0, "");
//    string nameFile, textFile, elOut;
//    cout << "¬ведите название вашего файла: ";
//    getline(cin, nameFile);
//    ofstream fout(nameFile + ".txt");
//    cout << "¬ведите текст файла:" << endl;
//    getline(cin, textFile);
//    fout << textFile;
//    fout.close();
//
//    ifstream fin(nameFile + ".txt");
//    while (!fin.eof()) {
//        getline(fin, elOut);
//        for (int i = 0; i < elOut.size(); i++) {
//            if (isdigit(elOut[i])) {
//                cout << elOut[i];
//            }
//            else {
//                cout << " ";
//            }
//        }
//    }
//    fin.close();
//    return 0;
//}
