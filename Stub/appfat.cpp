#include "../types.h"

char empty_string = 0;

void TermMsg(char *pszFmt, ...)
{
	char buf[256];

	va_list args;
	va_start(args, pszFmt);

	vsnprintf(buf, sizeof(buf), pszFmt, args);

	eprintf("%s: %s\n", __FUNCTION__, buf);
	abort();
}

void __fastcall ErrDlg(int template_id, int error_code, char *log_file_path, int log_line_nr)
{
	UNIMPLEMENTED();
}

void __fastcall ErrOkDlg(int template_id, int error_code, char *log_file_path, int log_line_nr)
{
	UNIMPLEMENTED();
}

void __fastcall DirErrorDlg(char *error)
{
	UNIMPLEMENTED();
}

BOOL __cdecl InsertCDDlg()
{
	printf("Please insert cd\n");
	DUMMY();
}

void __fastcall FileErrDlg(const char *error)
{
	printf("Missing file %s\n", error);
	UNIMPLEMENTED();
}

void __fastcall DDErrMsg(int error_code, int log_line_nr, char *log_file_path)
{
	UNIMPLEMENTED();
}

void __fastcall DiskFreeDlg(char *error)
{
	UNIMPLEMENTED();
}

void DrawDlg(char *pszFmt, ...)
{
	UNIMPLEMENTED();
}

char *__cdecl TraceLastError()
{
	DUMMY();
	return "";
}