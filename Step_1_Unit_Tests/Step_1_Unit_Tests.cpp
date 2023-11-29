#include "pch.h"
#include "CppUnitTest.h"
#include "../ADS_CA2_Tree_Project/main.h"
#include <iostream>
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Step1UnitTests
{
	TEST_CLASS(Step1UnitTests)
	{
	public:
		
		TEST_METHOD(TestReadSimpleSampleXML)
		{
			std::string expectedString = "<dir><name>ADS_Single_LinkedList_Exercises</name><dir><name>.git</name><file><name>config</name><length>353b</length><type>config</type></file><file><name>description</name><length>73b</length><type>description</type></file><file><name>HEAD</name><length>23b</length><type>HEAD</type></file></dir><dir><name>.vs</name><dir><name>ADS_Single_LinkedList_Exercises</name><dir><name>v17</name></dir></dir></dir><dir><name>Debug</name><file><name>SinglyLinkedList.pdb</name><length>978944b</length><type>pdb</type></file><file><name>TestSinglyLinkedList.exp</name><length>41528b</length><type>exp</type></file><file><name>TestSinglyLinkedList.pdb</name><length>1945600b</length><type>pdb</type></file></dir></dir>";
			Assert::IsTrue(expectedString == readFile("../../../vs_sample_simple.xml"));
		}
	};
}
