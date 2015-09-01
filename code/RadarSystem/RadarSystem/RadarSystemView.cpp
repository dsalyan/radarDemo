
// RadarSystemView.cpp : CRadarSystemView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
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

// CRadarSystemView ����/����

CRadarSystemView::CRadarSystemView()
{
	// TODO:  �ڴ˴���ӹ������

}

CRadarSystemView::~CRadarSystemView()
{
}

BOOL CRadarSystemView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO:  �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CRadarSystemView ����

void CRadarSystemView::OnDraw(CDC* /*pDC*/)
{
	CRadarSystemDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO:  �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CRadarSystemView ���

#ifdef _DEBUG
void CRadarSystemView::AssertValid() const
{
	CView::AssertValid();
}

void CRadarSystemView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CRadarSystemDoc* CRadarSystemView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CRadarSystemDoc)));
	return (CRadarSystemDoc*)m_pDocument;
}
#endif //_DEBUG


// CRadarSystemView ��Ϣ�������
