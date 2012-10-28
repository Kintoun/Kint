// Backend.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "Backend.h"

namespace Kint
{

// This is an example of an exported variable
//BACKEND_API int nBackend=0;

// This is an example of an exported function.
/*
BACKEND_API int fnBackend()
{
	return 42;
}
*/

// This is the constructor of a class that has been exported.
Backend::Backend()
{	
}

int Backend::SampleFunction()
{
	return 69;
}

}