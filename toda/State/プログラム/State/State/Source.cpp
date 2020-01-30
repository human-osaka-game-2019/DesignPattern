#include "NoonState.h"

// 唯一のインスタンスを得る
NoonState& NoonState::getInstance() {
	return *singleton;
}

void NoonState::CreateInstance()
{
	singleton = new NoonState();
}

// 時刻設定
void NoonState::doClock(IContext& context, int hour)
{
	if (12 <= hour && hour < 13)
	{
		context.changeState(*this);
	}
}

// 金庫使用
void NoonState::doUse(IContext& context)
{
	context.callSecurityCenter("警備センターに非事事態の通知");
}

// 非常ベル
void NoonState::doAlarm(IContext& context)
{
	context.callSecurityCenter("非常ベル(警備センター)");
}

// 通常通話
void NoonState::doPhone(IContext& context)
{
	context.recordLog("警備センターに留守電");
}

// 文字列表現
std::string NoonState::toString()
{
	return "[昼食時]";
}