#include "file_manager.h"
#include <fstream>

FileManager::FileManager(const string& _filename)
: filename_(_filename)
{}

bool FileManager::Read(string& data)
{
	data.clear();
	ifstream iFile(filename_, ofstream::binary);
	if (iFile.is_open())
	{
		iFile.seekg(0, iFile.end);
		size_t size = iFile.tellg();
		iFile.seekg(0);

		data.resize(size, ' ');
		iFile.read((char*)data.c_str(), size);
		iFile.close();
		return true;
	}
	return false;
}

bool FileManager::Write(const string& data)
{
	ofstream oFile(filename_, ofstream::binary);
	if(oFile.is_open())
	{
		oFile.write(data.c_str(), data.length());
		oFile.close();
		return true;
	}
	return false;
}
