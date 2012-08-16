// dllmain.cpp : Defines the entry point for the DLL application.
#include "stdafx.h"
#include <Windows.h>
#include <string.h>
#include <stdio.h>

BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
					 )
{
	char* helloStr;
	char buf[250];
	DWORD pid = GetCurrentProcessId();

	switch (ul_reason_for_call)
	{
	case DLL_PROCESS_ATTACH:
	case DLL_THREAD_ATTACH:
		helloStr = "Hello from: %d";
		sprintf(buf, helloStr, pid);
		MessageBox(NULL, buf, NULL, NULL);
		break;
	case DLL_THREAD_DETACH:
	case DLL_PROCESS_DETACH:
		helloStr = "Goodbye from: %d";
		sprintf(buf, helloStr, pid);
		MessageBox(NULL, buf, NULL, NULL);
		break;
	}
	return TRUE;
}