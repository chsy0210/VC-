
// MFCExperiment1-3Doc.h : CMFCExperiment13Doc ��Ľӿ�
//


#pragma once


class CMFCExperiment13Doc : public CDocument
{
protected: // �������л�����
	CMFCExperiment13Doc();
	DECLARE_DYNCREATE(CMFCExperiment13Doc)

// ����
public:

// ����
public:
	CString A;
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
	virtual ~CMFCExperiment13Doc();
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
