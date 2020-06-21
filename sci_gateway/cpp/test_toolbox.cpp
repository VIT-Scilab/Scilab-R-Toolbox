#include <wchar.h>
#include "test_toolbox.hxx"
extern "C"
{
#include "test_toolbox.h"
}

#define MODULE_NAME L"test_toolbox"

int test_toolbox(wchar_t* _pwstFuncName)
{
    if(wcscmp(_pwstFuncName, L"kruskal_wallis") == 0){ addCFunction(L"kruskal_wallis", &sci_kruskal_wallis, MODULE_NAME); }

    return 1;
}
