#pragma once

#include <unknwn.h>

struct __declspec(uuid("f75fd78b-d05a-4568-a716-1ee746859c23")) Hen;

struct __declspec(uuid("1b8157bd-e901-4b05-9c09-0cf594213ec0"))IHen : IUnknown
{
	virtual void __stdcall Cluck() = 0;
};

struct __declspec(uuid("1b8157bd-e901-4b05-9c09-0cf594213ec0")) IHatchery : IUnknown
{
    virtual HRESULT __stdcall CreateHen(IHen** hen) = 0;
};