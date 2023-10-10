// Fisher_Yates_Shuffle.main.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//
#include <iostream>
#include <cstdlib>
#include"Fisher_Yates.h"
using namespace std;

int main()
{
	time_t t;
	srand(time(&t) % RAND_MAX);

	int* array;
	int size;	// 配列の大きさ

	cout << "配列の大きさを指定 > " << flush;
	cin >> size;

	// 動的確保
	array = new int[size];

	InitRandArray(array, size);

	cout << "シャッフル前" << endl;
	for (int k = 0; k < size; ++k)
	{
		printf("%d, ", array[k]);
	}
	cout << endl;

	Shuffle(array, size);

	// 解放
	if (array != NULL)
	{
		delete[] array;
		array = NULL;
	}
}

// プログラムの実行: Ctrl + F5 または [デバッグ] > [デバッグなしで開始] メニュー
// プログラムのデバッグ: F5 または [デバッグ] > [デバッグの開始] メニュー

// 作業を開始するためのヒント: 
//    1. ソリューション エクスプローラー ウィンドウを使用してファイルを追加/管理します 
//   2. チーム エクスプローラー ウィンドウを使用してソース管理に接続します
//   3. 出力ウィンドウを使用して、ビルド出力とその他のメッセージを表示します
//   4. エラー一覧ウィンドウを使用してエラーを表示します
//   5. [プロジェクト] > [新しい項目の追加] と移動して新しいコード ファイルを作成するか、[プロジェクト] > [既存の項目の追加] と移動して既存のコード ファイルをプロジェクトに追加します
//   6. 後ほどこのプロジェクトを再び開く場合、[ファイル] > [開く] > [プロジェクト] と移動して .sln ファイルを選択します
