#include <iostream>
#include <math.h>;

using namespace std;

int fact(int t)
{
	if (t < 0)
	{
		return 0;
	}
	else if (t == 0 || t == 1)
	{
		return 1;
	}
	else
	{
		int a = fact(t - 1) * t;
		return a;
	}
}

int main()
{
	setlocale(LC_ALL, "rus");
	int a = 0;
	int b = 4;
	const int n = 6;
	const int m = 6;
	double h = (double)(b - a) / (n - 1); //0,8
	double rez[m];
	//double E = 1e-6;
	for (int j = 0; j < m; j++)
	{
		double x = j * h;
		double sum = 0;
		for (int i = 0; i < n; i++)
		{
			double y = (pow(-1, i) * pow(x, 2 * i + 1)) / ((2 * i + 1) * (fact(2 * i + 1)));
			sum += y;
		}
		rez[j] = sum;
		//cout << rez << endl;
	}
	for (int k = 0; k < m; k++) 
	{
		cout << "При x = " << k * h << ", сумма ряда равна: " << rez[k] << endl;
	}
	return 0;
}




//#include <iostream>
//#include <cmath>
//
//// Функция для вычисления факториала
//unsigned long factorial(unsigned int n) {
//    if (n == 0 || n == 1) {
//        return 1;
//    }
//    unsigned long result = 1;
//    for (unsigned int i = 2; i <= n; ++i) {
//        result *= i;
//    }
//    return result;
//}
//
//int main() {
//    const int N = 6;  // Количество значений n
//    const int M = 6;  // Количество значений x (от 0 до 4 включительно)
//    const double stepX = 0.8;  // Шаг изменения x
//    setlocale(LC_ALL, "rus");
//    // Массив для хранения результатов
//    double results[M];
//
//    // Внешний цикл для перебора значений x
//    for (int j = 0; j < M; ++j) {
//        double x = j * stepX;
//        double sum = 0.0;
//
//        // Внутренний цикл для вычисления суммы ряда
//        for (int i = 0; i < N; ++i) {
//            double term = std::pow(-1, i) * std::pow(x, 2 * i + 1) /
//                ((2 * i + 1) * static_cast<double>(factorial(2 * i + 1)));
//            sum += term;
//        }
//
//        results[j] = sum;
//    }
//
//    // Вывод результатов
//    for (int k = 0; k < M; ++k) {
//        std::cout << "При x = " << k * stepX << ", сумма ряда равна: " << results[k] << std::endl;
//    }
//
//    return 0;
//}
