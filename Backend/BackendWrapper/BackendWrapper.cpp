// This is the main DLL file.

#include "stdafx.h"

#include "BackendWrapper.h"

// Include the header file of the native C++ module.
#include "../Backend.h"

namespace Kint
{

SimpleBackendWrapper::SimpleBackendWrapper() : m_impl(new Backend())
{	
}

SimpleBackendWrapper::~SimpleBackendWrapper()
{
    if (m_impl)
    {
        delete m_impl;
        m_impl = nullptr;
    }
}

SimpleBackendWrapper::!SimpleBackendWrapper()
{
    if (m_impl)
    {
        delete m_impl;
        m_impl = nullptr;
    }
}

int SimpleBackendWrapper::WrapperSampleFuntion()
{
    return m_impl->SampleFunction();
}

}

