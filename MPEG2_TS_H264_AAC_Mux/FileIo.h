#pragma once

#include "Information.h"

#define INPUTH264FILENAME     "..\\H264_STREAM\\22.264"
#define INPUTAACFILENAME      "..\\AAC_STREAM\\22.aac"
#define OUTPUTTSFILENAME     "..\\TS_STREAM\\22TS.ts"


extern FILE * pVideo_H264_File;
extern FILE * pAudio_Aac_File;
extern FILE * pVideo_Audio_Ts_File;

FILE * OpenFile(char * FileName,char * OpenMode);                        //打开文件
void   CloseFile(FILE * pFile);                                          //关闭文件
int    ReadFile(FILE * pFile ,unsigned char * Buffer,int BufferSize);    //读取操作
int    WriteFile(FILE * pFile ,char * Buffer,int BufferSize);            //文件写操作
