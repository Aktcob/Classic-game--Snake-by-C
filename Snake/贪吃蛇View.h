// ̰����View.h : CMyView ��Ľӿ�
//

#include "Snake.h"
#include "Ge.h"
#include "Bean.h"

#pragma once


class CMyView : public CView
{
protected: // �������л�����
	CMyView();
	DECLARE_DYNCREATE(CMyView)

	// ����
public:
	CMyDoc* GetDocument() const;

	// ����
public:
	int k = 0;    //��̬Ч���ж���
	int l = 0;
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
	virtual ~CMyView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:
private:
	bool m_start;
	bool m_pause;

	// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnStart();
	afx_msg void OnPause();
private:
	CSnake snake1, snake2;

public:
	afx_msg void OnTimer(UINT_PTR nIDEvent);
	afx_msg void OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags);
private:
	CBean bean;


};

#ifndef _DEBUG  // ̰����View.cpp �еĵ��԰汾
inline CMyDoc* CMyView::GetDocument() const
{
	return reinterpret_cast<CMyDoc*>(m_pDocument);
}
#endif



