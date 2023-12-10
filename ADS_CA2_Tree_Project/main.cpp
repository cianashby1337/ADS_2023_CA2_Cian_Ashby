#include <iostream>
#include "main.h"
#include "Tree.h"
#include "File.h"

int main() {
	std::string expectedString = "<dir><name>ADS_Single_LinkedList_Exercises</name><dir><name>.git</name><file><name>config</name><length>353b</length><type>config</type></file><file><name>description</name><length>73b</length><type>description</type></file><file><name>HEAD</name><length>23b</length><type>HEAD</type></file></dir><dir><name>.vs</name><dir><name>ADS_Single_LinkedList_Exercises</name><dir><name>v17</name></dir></dir></dir><dir><name>Debug</name><file><name>SinglyLinkedList.pdb</name><length>978944b</length><type>pdb</type></file><file><name>TestSinglyLinkedList.exp</name><length>41528b</length><type>exp</type></file><file><name>TestSinglyLinkedList.pdb</name><length>1945600b</length><type>pdb</type></file></dir></dir>";
	Tree<File>* testTree = createFileSystem(expectedString);
	std::cout << sumDirectoryMemoryUsage(testTree) << std::endl;
	return 0;
}