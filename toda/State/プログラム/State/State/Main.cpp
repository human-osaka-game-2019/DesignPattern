#include "IContext.h"
#include "SafeFrame.h" 

int main()
{
	SafeFrame* frame = new SafeFrame("State Sample");

	while (true)
	{
		for (int hour = 0; hour < 24; hour++) 
		{
			frame->setClock(hour);   // 時刻の設定
			{

			}
		}
	}

	delete frame;

}
