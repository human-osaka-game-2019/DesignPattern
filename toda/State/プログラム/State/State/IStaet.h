#ifndef ISTATE_H
#define ISTATE_H


class IContext;
class IState {
public:
	virtual void doClock(IContext& context, int hour) = 0;    // 時刻設定
	virtual void doUse(IContext& context) = 0;                // 金庫使用
	virtual void doAlarm(IContext& context) = 0;              // 非常ベル
	virtual void doPhone(IContext& context) = 0;              // 通常通話
};

#endif