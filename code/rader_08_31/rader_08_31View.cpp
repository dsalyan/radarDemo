
// rader_08_31View.cpp : Crader_08_31View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
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
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &Crader_08_31View::OnFilePrintPreview)
	ON_WM_CONTEXTMENU()
	ON_WM_RBUTTONUP()
	ON_COMMAND(ID_32771, &Crader_08_31View::OnFuncSceneSet)
END_MESSAGE_MAP()

// Crader_08_31View ����/����

Crader_08_31View::Crader_08_31View()
{
	CBitmap bmp;
	bmp.LoadBitmap(IDB_CLASS_VIEW); ///����λͼ
	m_brush.CreatePatternBrush(&bmp); ///����λͼ��ˢ
	// TODO:  �ڴ˴���ӹ������

}

Crader_08_31View::~Crader_08_31View()
{
}

BOOL Crader_08_31View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO:  �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Crader_08_31View ����

void Crader_08_31View::OnDraw(CDC*  pDC)
{
	Crader_08_31Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CRect rect;
	GetClientRect(rect);///ȡ�ÿͻ�����
	pDC->FillRect(rect, &m_brush); ///�ñ�����ˢ�������
	// TODO:  �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Crader_08_31View ��ӡ


void Crader_08_31View::OnFilePrintPreview()
{
#ifndef SHARED_HANDLERS
	AFXPrintPreview(this);
#endif
}

BOOL Crader_08_31View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void Crader_08_31View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void Crader_08_31View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  ��Ӵ�ӡ����е��������
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


// Crader_08_31View ���

#ifdef _DEBUG
void Crader_08_31View::AssertValid() const
{
	CView::AssertValid();
}

void Crader_08_31View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Crader_08_31Doc* Crader_08_31View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Crader_08_31Doc)));
	return (Crader_08_31Doc*)m_pDocument;
}
#endif //_DEBUG


// Crader_08_31View ��Ϣ�������


void Crader_08_31View::OnFuncSceneSet()
{
	MessageBoxW(_T("he"),0,0);
	// TODO:  �ڴ���������������
}
