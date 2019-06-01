#pragma once //Change this depending if you're using Visual Studio
#include <Windows.h>
#include <TlHelp32.h>
#include <iostream>

namespace MemoryWrapper
{
	class Memory
	{
	public:
		DWORD processID;

		DWORD GetModuleBaseAddress(DWORD, const wchar_t*);

		DWORD GetPID(LPCSTR);

		HANDLE GetHandle(LPCSTR);

		void WriteToMemory(BYTE*, DWORD, int);

		void ReadFromMemory(DWORD, LPVOID, int);
	};
}