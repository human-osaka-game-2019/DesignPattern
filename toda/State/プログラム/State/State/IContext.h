#ifndef ICONTEXT_H
#define ICONTEXT_H

#include <string>
using std::string;

class IState;
class IContext
{
public:
	virtual void setClock(int hour) = 0;                // 時刻の設定
	virtual void changeState(IState& state) = 0;          // 状態変化
	virtual void callSecurityCenter(string msg) = 0;    // 警備センター警備員呼び出し
	virtual void recordLog(string msg) = 0;             // 警備センター記録
};

#endif
