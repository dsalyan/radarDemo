
// MainFrm.cpp : CMainFrame 类的实现
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

// CMainFrame 构造/析构

CMainFrame::CMainFrame()
{
	// TODO:  在此添加成员初始化代码
}

CMainFrame::~CMainFrame()
{
}

BOOL CMainFrame::PreCreateWindow(CREATESTRUCT& cs)
{
	if( !CFrameWnd::PreCreateWindow(cs) )
		return FALSE;
	// TODO:  在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式
	//cs.lpszName = _T("RadarSystem");

	//return CFrameWnd::PreCreateWindow(cs);
	return TRUE;
}

// CMainFrame 诊断

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


// CMainFrame 消息处理程序



BOOL CMainFrame::OnCreateClient(LPCREATESTRUCT lpcs, CCreateContext* pContext)
{
	// TODO:  在此添加专用代码和/或调用基类
	CRect rect;

	//获取框架窗口客户区的CRect对象
	GetClientRect(&rect);

	//创建静态分割窗口，两列
	if (!splitWnd.CreateStatic(this, 1, 2))
		return FALSE;

	//设置变量通过判断当前的状态显示不同的界面
	//创建分割窗口中的视图
	if (!splitWnd.CreateView(0, 0, RUNTIME_CLASS(CLeftView), CSize(rect.Width() *0.7, rect.Height()), pContext))
		return FALSE;

	if (!splitWnd.CreateView(0, 1, RUNTIME_CLASS(CRightView), CSize(rect.Width()*0.3, rect.Height()), pContext))
		return FALSE;

	return TRUE;

	//return CFrameWnd::OnCreateClient(lpcs, pContext);
}


void CMainFrame::OnUpdateFrameTitle(BOOL bAddToTitle)
{
	// TODO:  在此添加专用代码和/或调用基类
	SetWindowText(_T("RadarSystem"));
	CFrameWnd::OnUpdateFrameTitle(bAddToTitle);
}
