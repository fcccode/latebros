#pragma once
#define WIN32_LEAN_AND_MEAN
#pragma comment(lib,"ntdll.lib")
#include <windows.h>
#include <ntstatus.h>
#include <WInternl.h>
#include <TlHelp32.h>
#include <Psapi.h>
#include <string>
#include <unordered_set>
#include <unordered_map>
#include <vector>