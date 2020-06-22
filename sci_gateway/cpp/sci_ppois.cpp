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
#include "r_ppois.h"




static const char fname[] = "poisson_test";
int sci_ppois(scilabEnv env, int nin, scilabVar* in, int nopt, scilabOpt* opt, int nout, scilabVar* out)

{
	double in1 ;
	double in2 ;
	double *out1;
	double ar[1];
  
if (nin > 2)
    {
        Scierror(77, _("%s: Wrong number of input argument(s): %d expected.\n"), fname, 2);
        return 1;
    }

if (nout != 1)
    {
        Scierror(77, _("%s: Wrong number of output argument(s): %d expected.\n"), fname, 1);
        return 1;
    }
    
    double result;
    int ret1 = r_ppois(in1,in2,&result);
   
    
    
    
    if(ret1 == -1){
    
    	Scierror(77,_("%s: Syntax error in the command\n"), fname);
    	return 1;
    	
    }

	out[0] = scilab_createDoubleMatrix2d(env, 1, 1, 0);
   	scilab_getDoubleArray(env, out[0],&out1);

		out1[0] = result;
    return 0;
}
}
