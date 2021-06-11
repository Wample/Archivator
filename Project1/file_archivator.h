#pragma once

#include "stdafx.h"

class eFileArchivator
{
public:
	void Compress(const string& src, string& dst);
	void DeCompress(const string& src, string& dst);
};
