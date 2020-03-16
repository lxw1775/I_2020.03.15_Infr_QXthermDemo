// XthermDemoDlg.h : ͷ�ļ�
//

#pragma once

#include "vfw.h"
// CXthermDemoDlg �Ի���
class CXthermDemoDlg : public CDialog
{
// ����
public:
	CXthermDemoDlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
	enum { IDD = IDD_XTHERMDEMO_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButRefl();
public:
	afx_msg void OnBnClickedButStart();
public:
	afx_msg void OnBnClickedButStop();
public:
	afx_msg void OnCbnSelchangeComboColor();
public:
	afx_msg void OnBnClickedCheckTmptype();
public:
	afx_msg void OnCbnSelchangeComboSrc();
 
public:
	afx_msg void OnBnClickedButTmp();
public:
	afx_msg void OnBnClickedButNuc();
public:
	afx_msg void OnCbnSelchangeComboCard();
public:
	afx_msg void OnBnClickedButPos1();
public:
	afx_msg void OnBnClickedButTmpset();
public:
	afx_msg void OnBnClickedButSavet();
public:
	afx_msg void OnBnClickedButSaveorg();
public:
	afx_msg void OnBnClickedButTest();
public:
	afx_msg void OnBnClickedCheckRecord();
			afx_msg int ChooseCompressor(COMPVARS *aCOMPVARS, HWND aParent = NULL );
		  afx_msg int GetCompressorName(COMPVARS *aCOMPVARS, CString &aName);

public:
	afx_msg void OnBnClickedCheckTemp();
};
