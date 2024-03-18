//#include <iostream>
//using namespace std;
//void main()
//{
//	setlocale(LC_ALL, "rus");
//	int Max = 1, Min = 1;
//	double MinValue = 100000.0, MaxValue = 0.0, SumKom = 0, SumMon = 0;
//	double Amount[3][4]
//	{
//	{5, 2, 0, 10},
//	{3, 5, 2, 5},
//	{20, 0, 0, 0}
//	};
//	double Cost[4][2]
//	{
//	{1.2, 0.5},
//	{2.8, 0.4},
//	{5, 1},
//	{2, 1.5}
//	};
//	double Result[3][2]{};
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 4; j++)
//		{
//			Result[i][0] += Amount[i][j] * Cost[j][0];
//		}
//	}
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 4; j++)
//		{
//			Result[i][1] += Amount[i][j] * Cost[j][1];
//		}
//	}
//	for (int i = 0; i < 3; i++)
//	{
//		SumMon += Result[i][0];
//		if (Result[i][0] > MaxValue)
//		{
//			MaxValue = Result[i][0];
//			Max = i + 1;
//		}
//		if (Result[i][0] < MinValue)
//		{
//			MinValue = Result[i][0];
//			Min = i + 1;
//		}
//	}
//	cout << "Самая большая выручка у продавца номер " << Max << endl;
//	cout << "Самая малая - у продавца номер " << Min << endl;
//	MinValue = 10000;
//	MaxValue = 0;
//	for (int i = 0; i < 3; i++)
//	{
//		SumKom += Result[i][1];
//		if (Result[i][1] > MaxValue)
//		{
//			MaxValue = Result[i][1];
//			Max = i + 1;
//		}
//		if (Result[i][1] < MinValue)
//		{
//			MinValue = Result[i][1];
//			Min = i + 1;
//		}
//	}
//	cout << "Самые большие комиссионные у продавца номер " << Max << endl;
//	cout << "Самые малые - у продавца номер " << Min << endl;
//	cout << "Сумма вырученных денег равна " << SumMon << endl;
//	cout << "Сумма комиссионных равна " << SumKom << endl;
//	cout << "Общая сумма денег прошедшая через руки продавцов равна " << SumKom + SumMon << endl;
//}