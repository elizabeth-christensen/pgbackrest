/***********************************************************************************************************************************
Harness for Stack Trace Testing
***********************************************************************************************************************************/

/***********************************************************************************************************************************
Functions
***********************************************************************************************************************************/
// Install/uninstall shim to return true from stackTraceBackCallback() to indicate that no backtrace data was found
#ifdef HAVE_LIBBACKTRACE
void hrnStackTraceBackShimInstall(void);
void hrnStackTraceBackShimUninstall(void);
#endif
