
// RadarSystem.h : RadarSystem Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CRadarSystemApp:
// �йش����ʵ�֣������ RadarSystem.cpp
//

class CRadarSystemApp : public CWinApp
{
public:
	CRadarSystemApp();


// ��д
public:
	virtual BOOL InitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CRadarSystemApp theApp;
