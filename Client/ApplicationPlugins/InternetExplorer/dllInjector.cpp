// DLLInjector.cpp : Defines the entry point for the console application.

#include "stdafx.h"
#include "Injector.h"

#define DLL_PATH "\\..\\Debug\\exampledll.dll" // The DLL we would like to inject
#define PROC_NAME "iexplore.exe" // Internet Explorer

Injector* injector = new Injector();

int _tmain(int argc, _TCHAR* argv[])
{

	TCHAR currentDir[MAX_PATH];
	TCHAR dllDir[MAX_PATH];
	GetCurrentDirectory(MAX_PATH,currentDir);

	strcpy(dllDir,currentDir);
	strcat(dllDir,DLL_PATH);

	printf("Current directory: %s\n", currentDir);
	printf("DLL path: %s\n", dllDir);
	printf("Process: %s\n", PROC_NAME);

	system("PAUSE");

	if(injector->Inject(PROC_NAME, dllDir)){
		printf("DLL injected!\n");
	} else {
		printf("Failed to inject the dll...\n");
	}

	system("PAUSE");

	return 0;
}