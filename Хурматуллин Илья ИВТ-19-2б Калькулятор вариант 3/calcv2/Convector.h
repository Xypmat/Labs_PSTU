#pragma once
#include <iostream>
using namespace System;

std::string& Convector_String_to_string(String^ s, std::string& os);
String^ Converrt_string_to_String(std::string& os, String^ s);
std::string& Convector_String_to_string(String^ s);
String^ Converrt_string_to_String(std::string& os);
System::String^ Convert_char_to_String(char* ch);
char* Convert_String_to_char(System::String^ string);
