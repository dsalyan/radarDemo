
// rader_08_31View.h : Crader_08_31View 类的接口
//

#pragma once


class Crader_08_31View : public CView
{
protected: // 仅从序列化创建
	Crader_08_31View();
	DECLARE_DYNCREATE(Crader_08_31View)

// 特性
public:
	Crader_08_31Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// 实现
public:
	virtual ~Crader_08_31View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	afx_msg void OnFilePrintPreview();
	afx_msg void OnRButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnContextMenu(CWnd* pWnd, CPoint point);
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnFuncSceneSet();
	CBrush m_brush;
};

#ifndef _DEBUG  // rader_08_31View.cpp 中的调试版本
inline Crader_08_31Doc* Crader_08_31View::GetDocument() const
   { return reinterpret_cast<Crader_08_31Doc*>(m_pDocument); }
#endif

