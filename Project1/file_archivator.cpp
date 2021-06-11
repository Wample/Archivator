
#include "file_archivator.h"

void eFileArchivator::Compress(const string& src, string& dst)
{
	int counter = 0;
	char symbol = 0;
	for (int i = 0; i < src.length(); i++)
	{
		//cout << src[i] << endl;
		if (symbol != src[i])
		{
			if (counter != 0)
			{
				dst += symbol + to_string(counter);
			}
			counter = 1;
			symbol = src[i];
		}
		else
		{
			counter ++;
		}
	}
	if (counter != 0)
	{
		dst += symbol + to_string(counter);
	}
}

//-----------------------------------------------------------------

void eFileArchivator::DeCompress(const string& src, string& dst)
{
	char symbol = 0;
	int counter = 0;
	for (int i = 0; i < src.length(); i=i+2)
	{
		symbol = src[i];
		counter = src[i+1]-'0';
		dst += string(counter, symbol);
	}
}
