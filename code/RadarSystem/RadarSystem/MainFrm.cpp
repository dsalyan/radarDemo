
// MainFrm.cpp : CMainFrame ���ʵ��
//

#include "stdafx.h"
#include "RadarSystem.h"
#include "LeftView.h"
#include "RightView.h"
#include "MainFrm.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

// CMainFrame

IMPLEMENT_DYNCREATE(CMainFrame, CFrameWnd)

BEGIN_MESSAGE_MAP(CMainFrame, CFrameWnd)
END_MESSAGE_MAP()

// CMainFrame ����/����

CMainFrame::CMainFrame()
{
	// TODO:  �ڴ���ӳ�Ա��ʼ������
}

CMainFrame::~CMainFrame()
{
}

BOOL CMainFrame::PreCreateWindow(CREATESTRUCT& cs)
{
	if( !CFrameWnd::PreCreateWindow(cs) )
		return FALSE;
	// TODO:  �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ
	//cs.lpszName = _T("RadarSystem");

	//return CFrameWnd::PreCreateWindow(cs);
	return TRUE;
}

// CMainFrame ���

#ifdef _DEBUG
void CMainFrame::AssertValid() const
{
	CFrameWnd::AssertValid();
}

void CMainFrame::Dump(CDumpContext& dc) const
{
	CFrameWnd::Dump(dc);
}
#endif //_DEBUG


// CMainFrame ��Ϣ�������



BOOL CMainFrame::OnCreateClient(LPCREATESTRUCT lpcs, CCreateContext* pContext)
{
	// TODO:  �ڴ����ר�ô����/����û���
	CRect rect;

	//��ȡ��ܴ��ڿͻ�����CRect����
	GetClientRect(&rect);

	//������̬�ָ�ڣ�����
	if (!splitWnd.CreateStatic(this, 1, 2))
		return FALSE;

	//���ñ���ͨ���жϵ�ǰ��״̬��ʾ��ͬ�Ľ���
	//�����ָ���е���ͼ
	if (!splitWnd.CreateView(0, 0, RUNTIME_CLASS(CLeftView), CSize(rect.Width() *0.7, rect.Height()), pContext))
		return FALSE;

	if (!splitWnd.CreateView(0, 1, RUNTIME_CLASS(CRightView), CSize(rect.Width()*0.3, rect.Height()), pContext))
		return FALSE;

	return TRUE;

	//return CFrameWnd::OnCreateClient(lpcs, pContext);
}


void CMainFrame::OnUpdateFrameTitle(BOOL bAddToTitle)
{
	// TODO:  �ڴ����ר�ô����/����û���
	SetWindowText(_T("RadarSystem"));
	CFrameWnd::OnUpdateFrameTitle(bAddToTitle);
}
