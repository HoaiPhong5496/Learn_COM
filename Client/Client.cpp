#include "Precompiled.h"
#include "..\Server\Server.h"

using namespace Microsoft::WRL;

struct ComException
{
	HRESULT result;

	explicit ComException(HRESULT const value) : 
		result(value) 
	{
	}
};

inline void HR(HRESULT const result)
{
	_ASSERT(S_OK == result);

	if (S_OK != result)
	{
		throw ComException(result);
	}
}

struct ComRuntime
{
	ComRuntime() 
	{
		HR(CoInitializeEx(nullptr, COINIT_MULTITHREADED));
	}
	~ComRuntime()
	{
		CoUninitialize();
	}
};

int main()
{

}

