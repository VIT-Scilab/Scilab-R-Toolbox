#include <wchar.h>
#include "libtest_toolbox.hxx"
extern "C"
{
#include "libtest_toolbox.h"
#include "addfunction.h"
}

#define MODULE_NAME L"libtest_toolbox"

int libtest_toolbox(wchar_t* _pwstFuncName)
{
    if(wcscmp(_pwstFuncName, L"kruskal_wallis") == 0){ addCFunction(L"kruskal_wallis", &sci_kruskal_wallis, MODULE_NAME); }

    return 1;
}
