// *****************************************************************************
//
// $Id: CyYUV10.h,v 1.6 2009/05/29 14:53:57 sbouchard Exp $
//
// 
//
// *****************************************************************************
//
//     Copyright (c) 2003, Pleora Technologies Inc., All rights reserved.
//
// *****************************************************************************
//
// File Name....: CyYUV10.h
//
// Description..: YUV on 10 bits
//
// *****************************************************************************

#ifndef __CY_YUV10_H__
#define __CY_YUV10_H__

// Includes
/////////////////////////////////////////////////////////////////////////////

#include "CyImgLib.h"
#include "CyPixelType.h"


// Class
/////////////////////////////////////////////////////////////////////////////

CY_DECLARE_PIXEL_TYPE( CyYUV10,
                       CY_PT_YUV10_1,
                       20,
                       4,
                       CY_IMG_LIB_API );


#endif //__CY_YUV10_H__