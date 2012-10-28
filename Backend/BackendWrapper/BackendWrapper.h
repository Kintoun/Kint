// BackendWrapper.h
#pragma once

using namespace System;

namespace Kint {

	class Backend;

	public ref class SimpleBackendWrapper
	{
	public:
		SimpleBackendWrapper();
		virtual ~SimpleBackendWrapper();

		int WrapperSampleFuntion();
	
	protected:
        !SimpleBackendWrapper();
	
	private:
        Backend* m_impl;
	};
}
