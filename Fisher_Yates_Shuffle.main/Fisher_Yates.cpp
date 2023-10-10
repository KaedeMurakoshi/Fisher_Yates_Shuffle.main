#include <iostream>
#include <utility> // swap
#include <cstdlib>
using namespace std;

// Fisher-Yates-Shuffle
void Shuffle(int* array, const int size)
{
	for (int i = size - 1; i >= 1; --i)
	{
		int randNum = rand() % i;
		swap(array[i], array[randNum]);

		// 配列の中身を表示
		printf("%d回目終了\n", size - i);
		for (int k = 0; k < size; ++k)
		{
			printf("%d, ", array[k]);
		}
		cout << endl;
	}
}

//// 配列をランダムな値で初期化
void InitRandArray(int* array, const int size)
{
	for (int i = 0; i < size; ++i)
	{
		// １～９９
		array[i] = rand() % 99 + 1;
	}
}