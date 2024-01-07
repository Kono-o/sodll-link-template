#ifdef _WIN32
# ifdef LIBRARY_EXPORTS
#   define LIBRARY_API  __declspec( dllexport )
# else
#   define LIBRARY_API  __declspec( dllimport )
# endif
#else
# define LIBRARY_API
#endif

LIBRARY_API bool linkCheck();
LIBRARY_API int mathOp(int x,int y, int b);