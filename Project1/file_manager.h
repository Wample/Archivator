#pragma once

#include "stdafx.h"


class FileManager
{
public:
	FileManager(const string& _filename);
	//add rule of five

	bool Read(string& data);
	bool Write(const string& data);
protected:
	string filename_;
};