
// RadarSystemView.h : CRadarSystemView 类的接口
//

#pragma once


class CRadarSystemView : public CView
{
protected: // 仅从序列化创建
	CRadarSystemView();
	DECLARE_DYNCREATE(CRadarSystemView)

// 特性
public:
	CRadarSystemDoc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CRadarSystemView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // RadarSystemView.cpp 中的调试版本
inline CRadarSystemDoc* CRadarSystemView::GetDocument() const
   { return reinterpret_cast<CRadarSystemDoc*>(m_pDocument); }
#endif

