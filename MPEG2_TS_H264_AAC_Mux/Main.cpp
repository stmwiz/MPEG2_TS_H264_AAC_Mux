#include "Mux.h"

#define FRAMETATE 60

int main()
{
	printf("--------程序运行开始----------\n");
	pVideo_H264_File = OpenFile(INPUTH264FILENAME,"rb");
	pAudio_Aac_File = OpenFile(INPUTAACFILENAME,"rb");
	pVideo_Audio_Ts_File = OpenFile(OUTPUTTSFILENAME,"wb");

	//////////////////////////////////////////////////////////////////////////
	WriteBuf2File(FRAMETATE);
	//////////////////////////////////////////////////////////////////////////

	if (pVideo_H264_File)
	{
		CloseFile(pVideo_H264_File);
		pVideo_H264_File = NULL;
	}
	if (pAudio_Aac_File)
	{
		CloseFile(pAudio_Aac_File);
		pAudio_Aac_File = NULL;
	}
	if (pVideo_Audio_Ts_File)
	{
		CloseFile(pVideo_Audio_Ts_File);
		pVideo_Audio_Ts_File = NULL;
	}
	printf("--------程序运行结束----------\n");
	printf("-------请按任意键退出---------\n");
	return getchar();
}