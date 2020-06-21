// Copyright (C) 2019 - IIT Bombay - FOSSEE
//
// This file must be used under the terms of the CeCILL.
// This source file is licensed as described in the file COPYING, which
// you should have received as part of this distribution.  The terms
// are also available at
// http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
// Author: Rupak Rokade
// Organization: FOSSEE, IIT Bombay
// Email: toolbox@scilab.in
extern "C"
{
#include<Scierror.h>
#include<api_scilab.h>
#include <stdio.h>
#include "localization.h"
#include "r_kruskal1.h"




static const char fname[] = "kruskal_wallis";
int sci_kruskal_wallis(scilabEnv env, int nin, scilabVar* in, int nopt, scilabOpt* opt, int nout, scilabVar* out)

{
	//wchar_t** in1 = NULL;
	//double* in2 = NULL;
	wchar_t** out1;
	//double ar[1];
  
if (nin > 0)
    {
        Scierror(77, _("%s: Wrong number of input argument(s): %d expected.\n"), fname, 0);
        return 1;
    }

if (nout != 1)
    {
        Scierror(77, _("%s: Wrong number of output argument(s): %d expected.\n"), fname, 1);
        return 1;
    }
    
    char *ans[5];
    int ret1 = r_kruskal1(ans);
    
    const size_t cSize0 = strlen(ans[0])+1;
    wchar_t *temp0 = new wchar_t[cSize0];
    mbstowcs (temp0,ans[0],cSize0);
    
    const size_t cSize1 = strlen(ans[1])+1;
    wchar_t *temp1 = new wchar_t[cSize1];
    mbstowcs (temp1,ans[1],cSize1);
    
    const size_t cSize2 = strlen(ans[2])+1;
    wchar_t *temp2 = new wchar_t[cSize2];
    mbstowcs (temp2,ans[2],cSize2);
    
    const size_t cSize3 = strlen(ans[3])+1;
    wchar_t *temp3 = new wchar_t[cSize3];
    mbstowcs (temp3,ans[3],cSize3);
    
    
    
    
    if(ret1 == -1){
    
    	Scierror(77,_("%s: Syntax error in the command\n"), fname);
    	return 1;
    	
    }

	out[0] = scilab_createStringMatrix2d(env, 1, 4);
   	scilab_getStringArray(env, out[0],&out1);

		out1[0] = temp0;
		out1[1] = temp1;
		out1[2] = temp2;
		out1[3] = temp3;
		//out[0]=scilab_createString(env,temp);
    return 0;
}
}
