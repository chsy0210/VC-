
// MFCExperiment7-3Doc.h : CMFCExperiment73Doc ��Ľӿ�
//


#pragma once


class CMFCExperiment73Doc : public CDocument
{
protected: // �������л�����
	CMFCExperiment73Doc();
	DECLARE_DYNCREATE(CMFCExperiment73Doc)

// ����
public:

// ����
public:
	
// ��д
public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
#ifdef SHARED_HANDLERS
	virtual void InitializeSearchContent();
	virtual void OnDrawThumbnail(CDC& dc, LPRECT lprcBounds);
#endif // SHARED_HANDLERS

// ʵ��
public:
	virtual ~CMFCExperiment73Doc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()

#ifdef SHARED_HANDLERS
	// ����Ϊ����������������������ݵ� Helper ����
	void SetSearchContent(const CString& value);
#endif // SHARED_HANDLERS
};
