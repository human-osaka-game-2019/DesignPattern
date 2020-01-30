#include "NightState.h"

// 唯一のインスタンスを得る
NightState& NightState::getInstance() {                 
	return *singleton;
} 

void NightState::CreateInstance()
{
	singleton = new NightState();
}

// 時刻設定
void NightState::doClock(IContext& context, int hour)
{   
	if (9 <= hour && hour < 17) 
	{
		context.changeState(*this);
	}
}
  
// 金庫使用
void NightState::doUse(IContext& context)
{              
	context.callSecurityCenter("非常：夜間の金庫使用！");
}

// 非常ベル
void NightState::doAlarm(IContext& context)
{             
	context.callSecurityCenter("非常ベル(夜間)");
}

// 通常通話
void NightState::doPhone(IContext& context) 
{              
	context.recordLog("夜間の通話録音");
}

// 文字列表現
std::string NightState::toString()
{                          
	return "[夜間]";
}