#ifndef NOONSTATE_H
#define NOONSTATE_H


#include"IStaet.h"
#include"IContext.h"
#include <string>

class NoonState : public IState
{
public:
	NoonState& getInstance();// 唯一のインスタンスを得る
	void CreateInstance();
	void doClock(IContext& context, int hour);// 時刻設定
	void doUse(IContext& context);// 金庫使用
	void doAlarm(IContext& context);// 非常ベル
	void doPhone(IContext& context);// 通常通話
	std::string toString();// 文字列表現

private:
	NoonState* singleton;
	NoonState() {}

};

#endif