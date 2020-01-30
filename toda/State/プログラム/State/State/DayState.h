#ifndef DAYSTATE_H
#define DAYSTATE_H


#include"IStaet.h"
#include"IContext.h"
#include <string>

class DayState : public IState
{
public:
	
	static IState& getInstance();// 唯一のインスタンスを得る
	void CreateInstance();//インスタンス生成

	void doClock(IContext& context, int hour);// 時刻設定
	void doUse(IContext& context);// 金庫使用
	void doAlarm(IContext& context);// 非常ベル
	void doPhone(IContext& context);// 通常通話
	std::string toString();// 文字列表現

private:

	static DayState* singleton;
	
	DayState() {                                // コンストラクタはprivate
		
	}
};

#endif
