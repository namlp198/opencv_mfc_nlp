
// opencv_mfcDlg.h : header file
//

#pragma once


// CopencvmfcDlg dialog
class CopencvmfcDlg : public CDialogEx
{
// Construction
public:
	CopencvmfcDlg(CWnd* pParent = nullptr);	// standard constructor

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_OPENCV_MFC_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedBtnFacedetectImage();
	afx_msg void OnBnClickedBtnFaceVideo();
	afx_msg void OnBnClickedBtnEdge();
};
