
// RadarSystemView.cpp : CRadarSystemView 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "RadarSystem.h"
#endif

#include "RadarSystemDoc.h"
#include "RadarSystemView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CRadarSystemView

IMPLEMENT_DYNCREATE(CRadarSystemView, CView)

BEGIN_MESSAGE_MAP(CRadarSystemView, CView)
END_MESSAGE_MAP()

// CRadarSystemView 构造/析构

CRadarSystemView::CRadarSystemView()
{
	// TODO:  在此处添加构造代码

}

CRadarSystemView::~CRadarSystemView()
{
}

BOOL CRadarSystemView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO:  在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CRadarSystemView 绘制

void CRadarSystemView::OnDraw(CDC* /*pDC*/)
{
	CRadarSystemDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO:  在此处为本机数据添加绘制代码
}


// CRadarSystemView 诊断

#ifdef _DEBUG
void CRadarSystemView::AssertValid() const
{
	CView::AssertValid();
}

void CRadarSystemView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CRadarSystemDoc* CRadarSystemView::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CRadarSystemDoc)));
	return (CRadarSystemDoc*)m_pDocument;
}
#endif //_DEBUG


// CRadarSystemView 消息处理程序
