
// Macro for import/export of DLL objects
#ifdef BACKEND_EXPORTS
#define BACKEND_API __declspec(dllexport)
#else
#define BACKEND_API __declspec(dllimport)
#endif

namespace Kint
{

// This example class is exported from the Backend.dll
class BACKEND_API Backend {
public:
	Backend();
	int SampleFunction();
};

// This is an example of an exported variable
//extern BACKEND_API int nBackend;

// This is an example of an exported function.
//BACKEND_API int fnBackend(void);

}