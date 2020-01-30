#include "RandomStrategy.h"

int RandomStrategy::GetValue()
{
	std::random_device rnd;     // 非決定的な乱数生成器を生成
	std::mt19937 mt(rnd());     //  メルセンヌ・ツイスタの32ビット版、引数は初期シード値
	std::uniform_int_distribution<int> rand(0, 100);        // [0, 99] 範囲の一様乱数

	return rand(mt);
}