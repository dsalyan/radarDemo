
// rader_08_31View.h : Crader_08_31View ��Ľӿ�
//

#pragma once


class Crader_08_31View : public CView
{
protected: // �������л�����
	Crader_08_31View();
	DECLARE_DYNCREATE(Crader_08_31View)

// ����
public:
	Crader_08_31Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// ʵ��
public:
	virtual ~Crader_08_31View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	afx_msg void OnFilePrintPreview();
	afx_msg void OnRButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnContextMenu(CWnd* pWnd, CPoint point);
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnFuncSceneSet();
	CBrush m_brush;
};

#ifndef _DEBUG  // rader_08_31View.cpp �еĵ��԰汾
inline Crader_08_31Doc* Crader_08_31View::GetDocument() const
   { return reinterpret_cast<Crader_08_31Doc*>(m_pDocument); }
#endif

