#include "stdafx.h"
#include "SampleGrabber.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <windows.h>

typedef void(WINAPI *CallBack)( BYTE* pData );

extern CallBack gCallBack;

BYTE *ppBuffer=NULL;//[384*288];//
int iFrameCnt = 0;
int iSampleCnt = 0;

SampleGrabberCallback::SampleGrabberCallback()  
{  
	m_bGetPicture = TRUE;  //FALSE
	//Get template path  
	//GetTempPath(MAX_PATH,m_chTempPath);  
	//StringCchCat(m_chTempPath,MAX_PATH,TEXT("NTKOCapturePic"));  
	//CreateDirectory(m_chTempPath,NULL);  
}  

ULONG STDMETHODCALLTYPE SampleGrabberCallback::AddRef()  
{  
	return 1;  
}  

ULONG STDMETHODCALLTYPE SampleGrabberCallback::Release()  
{  
	return 2;  
}  


HRESULT STDMETHODCALLTYPE SampleGrabberCallback::QueryInterface(REFIID riid,void** ppvObject)  
{  
	if (NULL == ppvObject) return E_POINTER;  
	if (riid == __uuidof(IUnknown))  
	{  
		*ppvObject = static_cast<IUnknown*>(this);  
		return S_OK;  
	}  
	if (riid == IID_ISampleGrabberCB)  
	{  
		*ppvObject = static_cast<ISampleGrabberCB*>(this);  
		return S_OK;  
	}  
	return E_NOTIMPL;  

}  

HRESULT STDMETHODCALLTYPE SampleGrabberCallback::SampleCB(double Time, IMediaSample *pSample)  
{  
	//iSampleCnt++;
	return E_NOTIMPL;  
}  

HRESULT STDMETHODCALLTYPE SampleGrabberCallback::BufferCB(double Time, BYTE *pBuffer, long BufferLen)  
{  
	iFrameCnt++;
	if(FALSE == m_bGetPicture)  //�ж��Ƿ���Ҫ��ͼ  
		return S_FALSE;  
	if(!pBuffer)  
		return E_POINTER;  

	if(gCallBack)
		gCallBack(pBuffer);
//	memcpy(ppBuffer,pBuffer,BufferLen);
	//if ((pBuffer[1]!=128)&&(pBuffer[3]!=128)&&(pBuffer[5]!=128)) 
	//{
	//if (iFrameCnt%10 == 0)
	//	SaveBitmap(pBuffer,BufferLen);  
		//m_bGetPicture = FALSE; 
	//}
	return S_OK;  
}  
