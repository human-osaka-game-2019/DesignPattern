#ifndef SAFEFRAME_H
#define SAFEFRAME_H

#include "IContext.h"
#include "ActionEvent.h"
#include "DayState.h"
#include <iostream>

using std::cout;
using std::endl;

class IState;
class SafeFrame : public IContext
{
private:

	IState* state;

public:
	// コンストラクタ
	SafeFrame(string title) {
		cout << title << endl;
		*state = DayState::getInstance();           // 現在の状態
	}
	// ボタンが押されたらここに来る
	void actionPerformed(ActionEvent e);

	// 時刻の設定
	void setClock(int hour);

	// 状態変化^
	void changeState(IState& state);
	// 警備センター警備員呼び出し
	void callSecurityCenter(string msg);
	// 警備センター記録
	void recordLog(string msg);
};

#endif
