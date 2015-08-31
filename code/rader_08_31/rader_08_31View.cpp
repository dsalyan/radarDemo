
// rader_08_31View.cpp : Crader_08_31View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "rader_08_31.h"
#endif

#include "rader_08_31Doc.h"
#include "rader_08_31View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Crader_08_31View

IMPLEMENT_DYNCREATE(Crader_08_31View, CView)

BEGIN_MESSAGE_MAP(Crader_08_31View, CView)
	// 标准打印命令
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &Crader_08_31View::OnFilePrintPreview)
	ON_WM_CONTEXTMENU()
	ON_WM_RBUTTONUP()
	ON_COMMAND(ID_32771, &Crader_08_31View::OnFuncSceneSet)
END_MESSAGE_MAP()

// Crader_08_31View 构造/析构

Crader_08_31View::Crader_08_31View()
{
	CBitmap bmp;
	bmp.LoadBitmap(IDB_CLASS_VIEW); ///加载位图
	m_brush.CreatePatternBrush(&bmp); ///创建位图画刷
	// TODO:  在此处添加构造代码

}

Crader_08_31View::~Crader_08_31View()
{
}

BOOL Crader_08_31View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO:  在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Crader_08_31View 绘制

void Crader_08_31View::OnDraw(CDC*  pDC)
{
	Crader_08_31Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CRect rect;
	GetClientRect(rect);///取得客户区域
	pDC->FillRect(rect, &m_brush); ///用背景画刷填充区域
	// TODO:  在此处为本机数据添加绘制代码
}


// Crader_08_31View 打印


void Crader_08_31View::OnFilePrintPreview()
{
#ifndef SHARED_HANDLERS
	AFXPrintPreview(this);
#endif
}

BOOL Crader_08_31View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 默认准备
	return DoPreparePrinting(pInfo);
}

void Crader_08_31View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  添加额外的打印前进行的初始化过程
}

void Crader_08_31View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  添加打印后进行的清理过程
}

void Crader_08_31View::OnRButtonUp(UINT /* nFlags */, CPoint point)
{
	ClientToScreen(&point);
	OnContextMenu(this, point);
}

void Crader_08_31View::OnContextMenu(CWnd* /* pWnd */, CPoint point)
{
#ifndef SHARED_HANDLERS
	theApp.GetContextMenuManager()->ShowPopupMenu(IDR_POPUP_EDIT, point.x, point.y, this, TRUE);
#endif
}


// Crader_08_31View 诊断

#ifdef _DEBUG
void Crader_08_31View::AssertValid() const
{
	CView::AssertValid();
}

void Crader_08_31View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Crader_08_31Doc* Crader_08_31View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Crader_08_31Doc)));
	return (Crader_08_31Doc*)m_pDocument;
}
#endif //_DEBUG


// Crader_08_31View 消息处理程序


void Crader_08_31View::OnFuncSceneSet()
{
	MessageBoxW(_T("he"),0,0);
	// TODO:  在此添加命令处理程序代码
}
