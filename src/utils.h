#pragma once
#include "pch.h"
#include <string>
#include "pystring/pystring.h"

string read_to_string(const string& path);
string ws2s(const wstring& str);
std::wstring s2ws(const std::string& s, bool isUtf8 = true);
void write_file_text(const string& path, const string& text, bool append = false);
string getEnvironment(const string& key);
wstring getNCMPath();

string get_command_line();

extern string datapath;

bool screenCapturePart(LPCWSTR fname);
bool saveBitmap(LPCWSTR filename, HBITMAP bmp, HPALETTE pal);

// https://stackoverflow.com/questions/1394053/how-to-write-a-generic-alert-message-using-win32
void alert(const wchar_t* item);
void alert(const wstring* item);
template<typename T>
void alert(T item)
{
	//this accepts all types that supports operator << 
	std::ostringstream os;
	os << item;
	MessageBoxA(NULL, os.str().c_str(), "BetterNCM", MB_OK | MB_ICONINFORMATION);
}


std::string load_string_resource(LPCTSTR name);
std::string wstring_to_utf_8(const std::wstring& str);
std::wstring utf8_to_wstring(const std::string& utf8);
semver::version getNCMExecutableVersion();
std::wstring wreplaceAll(std::wstring str, const std::wstring& from, const std::wstring& to);