#include "Convector.h"

std::string& Convector_String_to_string(String^ s, std::string& os)
{
	using namespace Runtime::InteropServices;
	const char* chars =
		(const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
	os = chars;
	Marshal::FreeHGlobal(IntPtr((void*)chars));
	return os;
}
System::String^ Converrt_string_to_String(std::string& os, String^ s)
{
	s = gcnew System::String(os.c_str());
	return s;
}
std::string& Convector_String_to_string(System::String^ s) {
	std::string os;
	using namespace Runtime::InteropServices;
	const char* chars =
		(const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
	os = chars;
	Marshal::FreeHGlobal(IntPtr((void*)chars));
	return os;
}
String^ Converrt_string_to_String(std::string& os) {
	System::String^ s = gcnew String(os.c_str());
	return s;
}
char* Convert_String_to_char(System::String^ string) {
	using namespace System::Runtime::InteropServices;
	return (char*)(void*)Marshal::StringToHGlobalAnsi(string);
}
System::String^ Convert_char_to_String(char* ch) {
	char* chr = new char();
	chr = ch;
	System::String^ str;
	for (int i = 0; chr[i] !='\0'; i++)
	{
		str += wchar_t(ch[i]);
	}
	return str;
}
System::String^ Convert_char_to_String(char ch) {
	char* chr = new char();
	chr[0] = ch;
	System::String^ str;
	for (int i = 0; chr[i] !='\0'; i++)
	{
		str += wchar_t(ch);
	}
	return str;
}