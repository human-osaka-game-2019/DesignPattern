#include "SafeFrame.h"
#include "IStaet.h"



void SafeFrame::actionPerformed(ActionEvent e) {

	switch (e)
	{
	case ActionEvent::buttonUse: // 金庫使用ボタン
		state->doUse(*this);
		break;
	case ActionEvent::buttonAlarm: // 非常ベルボタン
		state->doAlarm(*this);
		break;
	case ActionEvent::buttonPhone:// 通常通話ボタン
		state->doPhone(*this);
		break;
	case ActionEvent::buttonExit: // 終了ボタン
		//System.exit(0);
		break;
	default:
		cout << "?" << endl;
		break;
	}
}

void SafeFrame::setClock(int hour) {
	cout << "現在時刻は";
	if (hour < 10) {
		cout << "0" << hour << ":00" << endl;
	}
	else {
		cout << hour << ":00" << endl;
	}
	state->doClock(*this, hour);
}

void SafeFrame::changeState(IState& state) {
	*this->state = state;
}
// 警備センター警備員呼び出し
void SafeFrame::callSecurityCenter(string msg) {
	cout << "call! " << msg << endl;
}
// 警備センター記録
void SafeFrame::recordLog(string msg) {
	cout << "record ... " << msg << endl;
}