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

		// �z��̒��g��\��
		printf("%d��ڏI��\n", size - i);
		for (int k = 0; k < size; ++k)
		{
			printf("%d, ", array[k]);
		}
		cout << endl;
	}
}

//// �z��������_���Ȓl�ŏ�����
void InitRandArray(int* array, const int size)
{
	for (int i = 0; i < size; ++i)
	{
		// �P�`�X�X
		array[i] = rand() % 99 + 1;
	}
}