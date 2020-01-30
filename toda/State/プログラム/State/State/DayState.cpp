#include "DayState.h"

IState& DayState::getInstance() 
{                 // 唯一のインスタンスを得る
	return *singleton;
}

void DayState::CreateInstance()
{
	singleton = new DayState();
}
  
// 時刻設定
void DayState::doClock(IContext& context, int hour) 
{  
	if (hour < 9 || 17 <= hour) 
	{
		context.changeState(*this);
	}
} 
 
// 金庫使用
void DayState::doUse(IContext& context) 
{              
	context.recordLog("金庫使用(昼間)");
}
   
// 非常ベル
void DayState::doAlarm(IContext& context) 
{           
	context.callSecurityCenter("非常ベル(昼間)");
}

// 通常通話
void DayState::doPhone(IContext& context) 
{              
	context.callSecurityCenter("通常の通話(昼間)");
}
  
// 文字列表現
std::string DayState::toString() 
{                        
	return "[昼間]";
}