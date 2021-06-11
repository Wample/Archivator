#include <iostream>

//create class iArchivator with method Compress/Decompress(pure  virtual function)
//create class eRLEArchivator which inheritence of iArchivator and archived plain text
//code in main for exmaple
/*
* string text = "London is the capiiiital of GB";
* eRLEArchivator archivator;
* string compressedText;
* archivator.Compress(text, compressedText);
* cout<<compressedText<<endl; //must printed L1o1n1d1... i4t1...
* string decompressedText;
* archivator.DeCompress(compressedText, decompressedText);
* cout<<decompressedText<<endl; //must printed London is the capiiiital of GB.
*/

#include "file_manager.h"

int main()
{
	FileManager file1("1.txt");
	string data;
	file1.Read(data);
	FileManager file2("2.txt");
	file2.Write(data);
	string data2;
	file2.Read(data2);
	cout << data << endl;
	cout << data2 << endl;
}