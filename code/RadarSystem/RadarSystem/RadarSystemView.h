
// RadarSystemView.h : CRadarSystemView ��Ľӿ�
//

#pragma once


class CRadarSystemView : public CView
{
protected: // �������л�����
	CRadarSystemView();
	DECLARE_DYNCREATE(CRadarSystemView)

// ����
public:
	CRadarSystemDoc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CRadarSystemView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // RadarSystemView.cpp �еĵ��԰汾
inline CRadarSystemDoc* CRadarSystemView::GetDocument() const
   { return reinterpret_cast<CRadarSystemDoc*>(m_pDocument); }
#endif

