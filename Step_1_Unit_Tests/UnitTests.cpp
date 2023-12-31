#include "pch.h"
#include "CppUnitTest.h"
#include "../ADS_CA2_Tree_Project/main.h"
#include "../ADS_CA2_Tree_Project/File.h"
#include "../ADS_CA2_Tree_Project/Tree.h"
#include <iostream>
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Step1UnitTests
{
	TEST_CLASS(UnitTests)
	{
	public:
		
		TEST_METHOD(TestReadSimpleSampleXML)
		{
			std::string expectedString = "<dir><name>ADS_Single_LinkedList_Exercises</name><dir><name>.git</name><file><name>config</name><length>353b</length><type>config</type></file><file><name>description</name><length>73b</length><type>description</type></file><file><name>HEAD</name><length>23b</length><type>HEAD</type></file></dir><dir><name>.vs</name><dir><name>ADS_Single_LinkedList_Exercises</name><dir><name>v17</name></dir></dir></dir><dir><name>Debug</name><file><name>SinglyLinkedList.pdb</name><length>978944b</length><type>pdb</type></file><file><name>TestSinglyLinkedList.exp</name><length>41528b</length><type>exp</type></file><file><name>TestSinglyLinkedList.pdb</name><length>1945600b</length><type>pdb</type></file></dir></dir>";
			Assert::IsTrue(expectedString == readFile("../../../vs_sample_simple.xml"));
		}
		TEST_METHOD(TestReadSampleXML)
		{
			std::string expectedString = "<dir><name>ADS_Single_LinkedList_Exercises</name><dir><name>.git</name><file><name>config</name><length>353b</length><type>config</type></file><file><name>description</name><length>73b</length><type>description</type></file><file><name>HEAD</name><length>23b</length><type>HEAD</type></file><dir><name>hooks</name><file><name>applypatch-msg.sample</name><length>478b</length><type>sample</type></file><file><name>commit-msg.sample</name><length>896b</length><type>sample</type></file><file><name>fsmonitor-watchman.sample</name><length>4726b</length><type>sample</type></file><file><name>post-update.sample</name><length>189b</length><type>sample</type></file><file><name>pre-applypatch.sample</name><length>424b</length><type>sample</type></file><file><name>pre-commit.sample</name><length>1643b</length><type>sample</type></file><file><name>pre-merge-commit.sample</name><length>416b</length><type>sample</type></file><file><name>pre-push.sample</name><length>1374b</length><type>sample</type></file><file><name>pre-rebase.sample</name><length>4898b</length><type>sample</type></file><file><name>pre-receive.sample</name><length>544b</length><type>sample</type></file><file><name>prepare-commit-msg.sample</name><length>1492b</length><type>sample</type></file><file><name>push-to-checkout.sample</name><length>2783b</length><type>sample</type></file><file><name>update.sample</name><length>3650b</length><type>sample</type></file></dir><file><name>index</name><length>6067b</length><type>index</type></file><dir><name>info</name><file><name>exclude</name><length>240b</length><type>exclude</type></file></dir><dir><name>logs</name><file><name>HEAD</name><length>207b</length><type>HEAD</type></file><dir><name>refs</name><dir><name>heads</name></dir><dir><name>remotes</name><dir><name>origin</name></dir></dir></dir></dir><dir><name>objects</name><dir><name>info</name></dir><dir><name>pack</name><file><name>pack-dd10003f4df51da3151ea560db49e40595ba8f73.idx</name><length>6952b</length><type>idx</type></file><file><name>pack-dd10003f4df51da3151ea560db49e40595ba8f73.pack</name><length>27397529b</length><type>pack</type></file></dir></dir><file><name>packed-refs</name><length>114b</length><type>packed-refs</type></file><dir><name>refs</name><dir><name>heads</name><file><name>master</name><length>41b</length><type>master</type></file></dir><dir><name>remotes</name><dir><name>origin</name><file><name>HEAD</name><length>32b</length><type>HEAD</type></file></dir></dir><dir><name>tags</name></dir></dir></dir><file><name>.gitattributes</name><length>2581b</length><type>gitattributes</type></file><file><name>.gitignore</name><length>353b</length><type>gitignore</type></file><dir><name>.vs</name><dir><name>ADS_Single_LinkedList_Exercises</name><dir><name>v17</name><file><name>.suo</name><length>14848b</length><type>suo</type></file></dir></dir><dir><name>SinglyLinkedList</name><dir><name>FileContentIndex</name><file><name>541ec27e-6023-4ed4-bbc7-46cf8f6a2d4f.vsidx</name><length>27866b</length><type>vsidx</type></file><dir><name>merges</name></dir><file><name>read.lock</name><length>0b</length><type>lock</type></file></dir><dir><name>v17</name><file><name>.suo</name><length>43008b</length><type>suo</type></file><file><name>Browse.VC.db</name><length>16654336b</length><type>db</type></file><dir><name>ipch</name><dir><name>AutoPCH</name><dir><name>be7bd721b5de6425</name><file><name>SINGLYLINKEDLIST.ipch</name><length>917504b</length><type>ipch</type></file></dir></dir></dir><file><name>Solution.VC.db</name><length>839680b</length><type>db</type></file><dir><name>TestStore</name><dir><name>0</name><file><name>000.testlog</name><length>23806b</length><type>testlog</type></file><file><name>testlog.manifest</name><length>24b</length><type>manifest</type></file></dir></dir></dir></dir><file><name>VSWorkspaceState.json</name><length>78b</length><type>json</type></file></dir><dir><name>Debug</name><file><name>SinglyLinkedList.pdb</name><length>978944b</length><type>pdb</type></file><file><name>TestSinglyLinkedList.exp</name><length>41528b</length><type>exp</type></file><file><name>TestSinglyLinkedList.pdb</name><length>1945600b</length><type>pdb</type></file></dir><file><name>LICENSE.txt</name><length>1090b</length><type>txt</type></file><file><name>README.md</name><length>33b</length><type>md</type></file><dir><name>SinglyLinkedList</name><dir><name>Debug</name><file><name>SinglyLinkedList.Build.CppClean.log</name><length>4076b</length><type>log</type></file><file><name>SinglyLinkedList.exe.recipe</name><length>343b</length><type>recipe</type></file><file><name>SinglyLinkedList.ilk</name><length>386676b</length><type>ilk</type></file><file><name>SinglyLinkedList.log</name><length>1071b</length><type>log</type></file><dir><name>SinglyLinkedList.tlog</name><file><name>CL.command.1.tlog</name><length>2b</length><type>tlog</type></file><file><name>link.command.1.tlog</name><length>1606b</length><type>tlog</type></file><file><name>link.read.1.tlog</name><length>3442b</length><type>tlog</type></file><file><name>link.write.1.tlog</name><length>856b</length><type>tlog</type></file><file><name>SinglyLinkedList.lastbuildstate</name><length>201b</length><type>lastbuildstate</type></file><file><name>unsuccessfulbuild</name><length>0b</length><type>unsuccessfulbuild</type></file></dir><file><name>SinglyLinkedList.vcxproj.FileListAbsolute.txt</name><length>0b</length><type>txt</type></file><file><name>vc143.idb</name><length>19456b</length><type>idb</type></file><file><name>vc143.pdb</name><length>77824b</length><type>pdb</type></file></dir><file><name>ReadMe.txt</name><length>1720b</length><type>txt</type></file><file><name>SinglyLinkedList.cpp</name><length>1134b</length><type>cpp</type></file><file><name>SinglyLinkedList.vcxproj</name><length>7653b</length><type>vcxproj</type></file><file><name>SinglyLinkedList.vcxproj.filters</name><length>1347b</length><type>filters</type></file><file><name>SinglyLinkedList.vcxproj.user</name><length>168b</length><type>user</type></file><file><name>SList.h</name><length>2196b</length><type>h</type></file><file><name>SListIterator.h</name><length>859b</length><type>h</type></file><file><name>SListNode.h</name><length>729b</length><type>h</type></file><dir><name>x64</name><dir><name>Debug</name><file><name>SinglyLinkedList.exe.recipe</name><length>334b</length><type>recipe</type></file><file><name>SinglyLinkedList.ilk</name><length>685608b</length><type>ilk</type></file><file><name>SinglyLinkedList.log</name><length>150b</length><type>log</type></file><file><name>SinglyLinkedList.obj</name><length>34970b</length><type>obj</type></file><dir><name>SinglyLinkedList.tlog</name><file><name>CL.command.1.tlog</name><length>892b</length><type>tlog</type></file><file><name>CL.read.1.tlog</name><length>1138b</length><type>tlog</type></file><file><name>CL.write.1.tlog</name><length>820b</length><type>tlog</type></file><file><name>link.command.1.tlog</name><length>1582b</length><type>tlog</type></file><file><name>link.read.1.tlog</name><length>3620b</length><type>tlog</type></file><file><name>link.write.1.tlog</name><length>816b</length><type>tlog</type></file><file><name>SinglyLinkedList.lastbuildstate</name><length>190b</length><type>lastbuildstate</type></file></dir><file><name>vc143.idb</name><length>19456b</length><type>idb</type></file><file><name>vc143.pdb</name><length>77824b</length><type>pdb</type></file></dir></dir><file><name>~AutoRecover.SinglyLinkedList.vcxproj</name><length>7659b</length><type>vcxproj</type></file></dir><file><name>SinglyLinkedList.sln</name><length>2251b</length><type>sln</type></file><dir><name>TestSinglyLinkedList</name><dir><name>Debug</name><dir><name>TestSing.847AC544.tlog</name><file><name>CL.command.1.tlog</name><length>3300b</length><type>tlog</type></file><file><name>CL.read.1.tlog</name><length>42030b</length><type>tlog</type></file><file><name>CL.write.1.tlog</name><length>2190b</length><type>tlog</type></file><file><name>link.command.1.tlog</name><length>2084b</length><type>tlog</type></file><file><name>link.read.1.tlog</name><length>4422b</length><type>tlog</type></file><file><name>link.write.1.tlog</name><length>1112b</length><type>tlog</type></file><file><name>TestSinglyLinkedList.lastbuildstate</name><length>201b</length><type>lastbuildstate</type></file><file><name>TestSinglyLinkedList.write.1u.tlog</name><length>1958b</length><type>tlog</type></file></dir><file><name>TestSinglyLinkedList.Build.CppClean.log</name><length>6166b</length><type>log</type></file><file><name>TestSinglyLinkedList.dll.recipe</name><length>347b</length><type>recipe</type></file><file><name>TestSinglyLinkedList.ilk</name><length>918844b</length><type>ilk</type></file><file><name>TestSinglyLinkedList.log</name><length>199b</length><type>log</type></file><file><name>TestSinglyLinkedList.vcxproj.FileListAbsolute.txt</name><length>0b</length><type>txt</type></file><file><name>vc143.idb</name><length>297984b</length><type>idb</type></file><file><name>vc143.pdb</name><length>495616b</length><type>pdb</type></file></dir><file><name>TestSinglyLinkedList.vcxproj</name><length>8451b</length><type>vcxproj</type></file><file><name>TestSinglyLinkedList.vcxproj.filters</name><length>1061b</length><type>filters</type></file><file><name>TestSList.cpp</name><length>6581b</length><type>cpp</type></file><file><name>TestSListNode.cpp</name><length>1086b</length><type>cpp</type></file><dir><name>x64</name><dir><name>Debug</name><dir><name>TestSing.847AC544.tlog</name><file><name>CL.command.1.tlog</name><length>2070b</length><type>tlog</type></file><file><name>CL.read.1.tlog</name><length>42310b</length><type>tlog</type></file><file><name>CL.write.1.tlog</name><length>2478b</length><type>tlog</type></file><file><name>link.command.1.tlog</name><length>2058b</length><type>tlog</type></file><file><name>link.read.1.tlog</name><length>4578b</length><type>tlog</type></file><file><name>link.write.1.tlog</name><length>1062b</length><type>tlog</type></file><file><name>TestSinglyLinkedList.lastbuildstate</name><length>190b</length><type>lastbuildstate</type></file><file><name>TestSinglyLinkedList.write.1u.tlog</name><length>1230b</length><type>tlog</type></file></dir><file><name>TestSinglyLinkedList.dll.recipe</name><length>338b</length><type>recipe</type></file><file><name>TestSinglyLinkedList.ilk</name><length>1427456b</length><type>ilk</type></file><file><name>TestSinglyLinkedList.log</name><length>151b</length><type>log</type></file><file><name>TestSList.obj</name><length>497948b</length><type>obj</type></file><file><name>TestSListNode.obj</name><length>348206b</length><type>obj</type></file><file><name>vc143.idb</name><length>297984b</length><type>idb</type></file><file><name>vc143.pdb</name><length>462848b</length><type>pdb</type></file></dir></dir><file><name>~AutoRecover.TestSinglyLinkedList.vcxproj</name><length>9020b</length><type>vcxproj</type></file></dir><dir><name>x64</name><dir><name>Debug</name><file><name>SinglyLinkedList.exe</name><length>72192b</length><type>exe</type></file><file><name>SinglyLinkedList.pdb</name><length>1093632b</length><type>pdb</type></file><file><name>TestSinglyLinkedList.dll</name><length>164352b</length><type>dll</type></file><file><name>TestSinglyLinkedList.exp</name><length>41732b</length><type>exp</type></file><file><name>TestSinglyLinkedList.lib</name><length>54024b</length><type>lib</type></file><file><name>TestSinglyLinkedList.pdb</name><length>1888256b</length><type>pdb</type></file></dir></dir></dir>";
			Assert::IsTrue(expectedString == readFile("../../../vs_sample.xml"));
		}

		TEST_METHOD(TestValidateCorrectNesting) {
			std::string xmlToValidate = "<dir><name>ADS_Single_LinkedList_Exercises</name><dir><name>.git</name><file><name>config</name><length>353b</length><type>config</type></file><file><name>description</name><length>73b</length><type>description</type></file><file><name>HEAD</name><length>23b</length><type>HEAD</type></file></dir><dir><name>.vs</name><dir><name>ADS_Single_LinkedList_Exercises</name><dir><name>v17</name></dir></dir></dir><dir><name>Debug</name><file><name>SinglyLinkedList.pdb</name><length>978944b</length><type>pdb</type></file><file><name>TestSinglyLinkedList.exp</name><length>41528b</length><type>exp</type></file><file><name>TestSinglyLinkedList.pdb</name><length>1945600b</length><type>pdb</type></file></dir></dir>";
			Assert::IsTrue(validator(xmlToValidate));
		}

		TEST_METHOD(TestValidateUnclosedRoot) {
			std::string xmlToValidate = "<dir><name></name>";
			Assert::IsFalse(validator(xmlToValidate));
		}

		TEST_METHOD(TestValidateDoubleRoot) {
			std::string xmlToValidate = "<dir><name>ADS_Single_LinkedList_Exercises</name><dir><name>.git</name><file><name>config</name><length>353b</length><type>config</type></file><file><name>description</name><length>73b</length><type>description</type></file><file><name>HEAD</name><length>23b</length><type>HEAD</type></file></dir><dir><name>.vs</name><dir><name>ADS_Single_LinkedList_Exercises</name><dir><name>v17</name></dir></dir></dir><dir><name>Debug</name><file><name>SinglyLinkedList.pdb</name><length>978944b</length><type>pdb</type></file><file><name>TestSinglyLinkedList.exp</name><length>41528b</length><type>exp</type></file><file><name>TestSinglyLinkedList.pdb</name><length>1945600b</length><type>pdb</type></file></dir></dir><dir></dir>";
			Assert::IsFalse(validator(xmlToValidate));
		}

		TEST_METHOD(TestValidateNoRoot) {
			std::string xmlToValidate = "<name>ADS_Single_LinkedList_Exercises</name><dir><name>.git</name><file><name>config</name><length>353b</length><type>config</type></file><file><name>description</name><length>73b</length><type>description</type></file><file><name>HEAD</name><length>23b</length><type>HEAD</type></file></dir><dir><name>.vs</name><dir><name>ADS_Single_LinkedList_Exercises</name><dir><name>v17</name></dir></dir></dir><dir><name>Debug</name><file><name>SinglyLinkedList.pdb</name><length>978944b</length><type>pdb</type></file><file><name>TestSinglyLinkedList.exp</name><length>41528b</length><type>exp</type></file><file><name>TestSinglyLinkedList.pdb</name><length>1945600b</length><type>pdb</type></file></dir>";
			Assert::IsFalse(validator(xmlToValidate));
		}

		TEST_METHOD(TestValidateFolderWithSize) {
			std::string xmlToValidate = "<dir><size>4b</size><name></name></dir>";
			Assert::IsFalse(validator(xmlToValidate));
		}

		TEST_METHOD(TestValidateFolderWithType) {
			std::string xmlToValidate = "<dir><type>config</type><name>ADS_Single_LinkedList_Exercises</name><dir><name>.git</name><file><name>config</name><length>353b</length><type>config</type></file><file><name>description</name><length>73b</length><type>description</type></file><file><name>HEAD</name><length>23b</length><type>HEAD</type></file></dir><dir><name>.vs</name><dir><name>ADS_Single_LinkedList_Exercises</name><dir><name>v17</name></dir></dir></dir><dir><name>Debug</name><file><name>SinglyLinkedList.pdb</name><length>978944b</length><type>pdb</type></file><file><name>TestSinglyLinkedList.exp</name><length>41528b</length><type>exp</type></file><file><name>TestSinglyLinkedList.pdb</name><length>1945600b</length><type>pdb</type></file></dir></dir>";
			Assert::IsFalse(validator(xmlToValidate));
		}

		TEST_METHOD(TestValidateFileWithDir) {
			std::string xmlToValidate = "<dir><type>config</type><name>ADS_Single_LinkedList_Exercises</name><dir><name>.git</name><file><name>config</name><length>353b</length><type>config</type></file><file><dir></dir><name>description</name><length>73b</length><type>description</type></file><file><name>HEAD</name><length>23b</length><type>HEAD</type></file></dir><dir><name>.vs</name><dir><name>ADS_Single_LinkedList_Exercises</name><dir><name>v17</name></dir></dir></dir><dir><name>Debug</name><file><name>SinglyLinkedList.pdb</name><length>978944b</length><type>pdb</type></file><file><name>TestSinglyLinkedList.exp</name><length>41528b</length><type>exp</type></file><file><name>TestSinglyLinkedList.pdb</name><length>1945600b</length><type>pdb</type></file></dir></dir>";
			Assert::IsFalse(validator(xmlToValidate));
		}

		TEST_METHOD(TestTreeRootIsFolder) {
			std::string xml = "<dir><name>ADS_Single_LinkedList_Exercises</name><dir><name>.git</name><file><name>config</name><length>353b</length><type>config</type></file><file><name>description</name><length>73b</length><type>description</type></file><file><name>HEAD</name><length>23b</length><type>HEAD</type></file></dir><dir><name>.vs</name><dir><name>ADS_Single_LinkedList_Exercises</name><dir><name>v17</name></dir></dir></dir><dir><name>Debug</name><file><name>SinglyLinkedList.pdb</name><length>978944b</length><type>pdb</type></file><file><name>TestSinglyLinkedList.exp</name><length>41528b</length><type>exp</type></file><file><name>TestSinglyLinkedList.pdb</name><length>1945600b</length><type>pdb</type></file></dir></dir>";
			Tree<File> t = createFileSystem(xml);
			Assert::IsTrue(t.data.isDirectory);
		}

		TEST_METHOD(TestTreeRootHasCorrectName) {
			std::string xml = "<dir><name>ADS_Single_LinkedList_Exercises</name><dir><name>.git</name><file><name>config</name><length>353b</length><type>config</type></file><file><name>description</name><length>73b</length><type>description</type></file><file><name>HEAD</name><length>23b</length><type>HEAD</type></file></dir><dir><name>.vs</name><dir><name>ADS_Single_LinkedList_Exercises</name><dir><name>v17</name></dir></dir></dir><dir><name>Debug</name><file><name>SinglyLinkedList.pdb</name><length>978944b</length><type>pdb</type></file><file><name>TestSinglyLinkedList.exp</name><length>41528b</length><type>exp</type></file><file><name>TestSinglyLinkedList.pdb</name><length>1945600b</length><type>pdb</type></file></dir></dir>";
			Tree<File>* t = createFileSystem(xml);
			Assert::IsTrue(t->data.name == "ADS_Single_LinkedList_Exercises");
		}

		TEST_METHOD(TestTreeFirstChildIsDebug) {
			std::string xml = "<dir><name>ADS_Single_LinkedList_Exercises</name><dir><name>.git</name><file><name>config</name><length>353b</length><type>config</type></file><file><name>description</name><length>73b</length><type>description</type></file><file><name>HEAD</name><length>23b</length><type>HEAD</type></file></dir><dir><name>.vs</name><dir><name>ADS_Single_LinkedList_Exercises</name><dir><name>v17</name></dir></dir></dir><dir><name>Debug</name><file><name>SinglyLinkedList.pdb</name><length>978944b</length><type>pdb</type></file><file><name>TestSinglyLinkedList.exp</name><length>41528b</length><type>exp</type></file><file><name>TestSinglyLinkedList.pdb</name><length>1945600b</length><type>pdb</type></file></dir></dir>";
			Tree<File>* t = createFileSystem(xml);
			Assert::IsTrue(t->children->head->data->data.name == "Debug");
		}

		TEST_METHOD(TestTreeFirstGrandchildIs1945600b) {
			std::string xml = "<dir><name>ADS_Single_LinkedList_Exercises</name><dir><name>.git</name><file><name>config</name><length>353b</length><type>config</type></file><file><name>description</name><length>73b</length><type>description</type></file><file><name>HEAD</name><length>23b</length><type>HEAD</type></file></dir><dir><name>.vs</name><dir><name>ADS_Single_LinkedList_Exercises</name><dir><name>v17</name></dir></dir></dir><dir><name>Debug</name><file><name>SinglyLinkedList.pdb</name><length>978944b</length><type>pdb</type></file><file><name>TestSinglyLinkedList.exp</name><length>41528b</length><type>exp</type></file><file><name>TestSinglyLinkedList.pdb</name><length>1945600b</length><type>pdb</type></file></dir></dir>";
			Tree<File>* t = createFileSystem(xml);
			Assert::AreEqual(1945600, t->children->head->data->children->head->data->data.length);
		}

		TEST_METHOD(TestWorkingDirectoryRoot) {
			std::string xml = "<dir><name>ADS_Single_LinkedList_Exercises</name><dir><name>.git</name><file><name>config</name><length>353b</length><type>config</type></file><file><name>description</name><length>73b</length><type>description</type></file><file><name>HEAD</name><length>23b</length><type>HEAD</type></file></dir><dir><name>.vs</name><dir><name>ADS_Single_LinkedList_Exercises</name><dir><name>v17</name></dir></dir></dir><dir><name>Debug</name><file><name>SinglyLinkedList.pdb</name><length>978944b</length><type>pdb</type></file><file><name>TestSinglyLinkedList.exp</name><length>41528b</length><type>exp</type></file><file><name>TestSinglyLinkedList.pdb</name><length>1945600b</length><type>pdb</type></file></dir></dir>";
			Tree<File>* t = createFileSystem(xml);
			Assert::IsTrue("Current Working Directory: ADS_Single_LinkedList_Exercises/" == findWorkingDirectory(t));
		}

		TEST_METHOD(TestWorkingDirectoryChild) {
			std::string xml = "<dir><name>ADS_Single_LinkedList_Exercises</name><dir><name>.git</name><file><name>config</name><length>353b</length><type>config</type></file><file><name>description</name><length>73b</length><type>description</type></file><file><name>HEAD</name><length>23b</length><type>HEAD</type></file></dir><dir><name>.vs</name><dir><name>ADS_Single_LinkedList_Exercises</name><dir><name>v17</name></dir></dir></dir><dir><name>Debug</name><file><name>SinglyLinkedList.pdb</name><length>978944b</length><type>pdb</type></file><file><name>TestSinglyLinkedList.exp</name><length>41528b</length><type>exp</type></file><file><name>TestSinglyLinkedList.pdb</name><length>1945600b</length><type>pdb</type></file></dir></dir>";
			Tree<File>* t = createFileSystem(xml);
			std::string pathString = findWorkingDirectory(t->children->head->data);
			Assert::IsTrue("Current Working Directory: ADS_Single_LinkedList_Exercises/Debug/" == pathString);
		}

		TEST_METHOD(TestDisplayRootContents) {
			std::string xml = "<dir><name>ADS_Single_LinkedList_Exercises</name><dir><name>.git</name><file><name>config</name><length>353b</length><type>config</type></file><file><name>description</name><length>73b</length><type>description</type></file><file><name>HEAD</name><length>23b</length><type>HEAD</type></file></dir><dir><name>.vs</name><dir><name>ADS_Single_LinkedList_Exercises</name><dir><name>v17</name></dir></dir></dir><dir><name>Debug</name><file><name>SinglyLinkedList.pdb</name><length>978944b</length><type>pdb</type></file><file><name>TestSinglyLinkedList.exp</name><length>41528b</length><type>exp</type></file><file><name>TestSinglyLinkedList.pdb</name><length>1945600b</length><type>pdb</type></file></dir></dir>";
			Tree<File>* t = createFileSystem(xml);
			std::string output = displayContents(t);
			Assert::IsTrue("Enter 0 to view actions, or choose an option below:\n1. Debug\n2. .vs\n3. .git\n" == output);
		}

		TEST_METHOD(TestDisplayChildContents) {
			std::string xml = "<dir><name>ADS_Single_LinkedList_Exercises</name><dir><name>.git</name><file><name>config</name><length>353b</length><type>config</type></file><file><name>description</name><length>73b</length><type>description</type></file><file><name>HEAD</name><length>23b</length><type>HEAD</type></file></dir><dir><name>.vs</name><dir><name>ADS_Single_LinkedList_Exercises</name><dir><name>v17</name></dir></dir></dir><dir><name>Debug</name><file><name>SinglyLinkedList.pdb</name><length>978944b</length><type>pdb</type></file><file><name>TestSinglyLinkedList.exp</name><length>41528b</length><type>exp</type></file><file><name>TestSinglyLinkedList.pdb</name><length>1945600b</length><type>pdb</type></file></dir></dir>";
			Tree<File>* t = createFileSystem(xml);
			std::string output = displayContents(t->children->head->data);
			Assert::IsTrue("Enter 0 to view actions, or choose an option below:\n1. TestSinglyLinkedList.pdb - 1945600b\n2. TestSinglyLinkedList.exp - 41528b\n3. SinglyLinkedList.pdb - 978944b\n" == output);
		}

		TEST_METHOD(TestCountFromRoot) {
			std::string xml = "<dir><name>ADS_Single_LinkedList_Exercises</name><dir><name>.git</name><file><name>config</name><length>353b</length><type>config</type></file><file><name>description</name><length>73b</length><type>description</type></file><file><name>HEAD</name><length>23b</length><type>HEAD</type></file></dir><dir><name>.vs</name><dir><name>ADS_Single_LinkedList_Exercises</name><dir><name>v17</name></dir></dir></dir><dir><name>Debug</name><file><name>SinglyLinkedList.pdb</name><length>978944b</length><type>pdb</type></file><file><name>TestSinglyLinkedList.exp</name><length>41528b</length><type>exp</type></file><file><name>TestSinglyLinkedList.pdb</name><length>1945600b</length><type>pdb</type></file></dir></dir>";
			Tree<File>* t = createFileSystem(xml);
			int count = countWithinDirectory(t);
			Assert::AreEqual(12, count);
		}

		TEST_METHOD(TestCountFromChild) {
			std::string xml = "<dir><name>ADS_Single_LinkedList_Exercises</name><dir><name>.git</name><file><name>config</name><length>353b</length><type>config</type></file><file><name>description</name><length>73b</length><type>description</type></file><file><name>HEAD</name><length>23b</length><type>HEAD</type></file></dir><dir><name>.vs</name><dir><name>ADS_Single_LinkedList_Exercises</name><dir><name>v17</name></dir></dir></dir><dir><name>Debug</name><file><name>SinglyLinkedList.pdb</name><length>978944b</length><type>pdb</type></file><file><name>TestSinglyLinkedList.exp</name><length>41528b</length><type>exp</type></file><file><name>TestSinglyLinkedList.pdb</name><length>1945600b</length><type>pdb</type></file></dir></dir>";
			Tree<File>* t = createFileSystem(xml);
			int count = countWithinDirectory(t->children->head->data);
			Assert::AreEqual(4, count);
		}

		TEST_METHOD(TestMemoryUsageFromRoot) {
			std::string xml = "<dir><name>ADS_Single_LinkedList_Exercises</name><dir><name>.git</name><file><name>config</name><length>353b</length><type>config</type></file><file><name>description</name><length>73b</length><type>description</type></file><file><name>HEAD</name><length>23b</length><type>HEAD</type></file></dir><dir><name>.vs</name><dir><name>ADS_Single_LinkedList_Exercises</name><dir><name>v17</name></dir></dir></dir><dir><name>Debug</name><file><name>SinglyLinkedList.pdb</name><length>978944b</length><type>pdb</type></file><file><name>TestSinglyLinkedList.exp</name><length>41528b</length><type>exp</type></file><file><name>TestSinglyLinkedList.pdb</name><length>1945600b</length><type>pdb</type></file></dir></dir>";
			Tree<File>* t = createFileSystem(xml);
			int count = sumDirectoryMemoryUsage(t);
			Assert::AreEqual(2966521, count);
		}

		TEST_METHOD(TestMemoryUsageFromChild) {
			std::string xml = "<dir><name>ADS_Single_LinkedList_Exercises</name><dir><name>.git</name><file><name>config</name><length>353b</length><type>config</type></file><file><name>description</name><length>73b</length><type>description</type></file><file><name>HEAD</name><length>23b</length><type>HEAD</type></file></dir><dir><name>.vs</name><dir><name>ADS_Single_LinkedList_Exercises</name><dir><name>v17</name></dir></dir></dir><dir><name>Debug</name><file><name>SinglyLinkedList.pdb</name><length>978944b</length><type>pdb</type></file><file><name>TestSinglyLinkedList.exp</name><length>41528b</length><type>exp</type></file><file><name>TestSinglyLinkedList.pdb</name><length>1945600b</length><type>pdb</type></file></dir></dir>";
			Tree<File>* t = createFileSystem(xml);
			int count = sumDirectoryMemoryUsage(t->children->head->data);
			Assert::AreEqual(2966072, count);
		}

		TEST_METHOD(TestFindCompleteFilename) {
			std::string xml = "<dir><name>ADS_Single_LinkedList_Exercises</name><dir><name>.git</name><file><name>config</name><length>353b</length><type>config</type></file><file><name>description</name><length>73b</length><type>description</type></file><file><name>HEAD</name><length>23b</length><type>HEAD</type></file></dir><dir><name>.vs</name><dir><name>ADS_Single_LinkedList_Exercises</name><dir><name>v17</name></dir></dir></dir><dir><name>Debug</name><file><name>SinglyLinkedList.pdb</name><length>978944b</length><type>pdb</type></file><file><name>TestSinglyLinkedList.exp</name><length>41528b</length><type>exp</type></file><file><name>TestSinglyLinkedList.pdb</name><length>1945600b</length><type>pdb</type></file></dir></dir>";
			Tree<File>* t = createFileSystem(xml);
			TreeIterator<File> treeIter(t);
			std::string output = findSearchItem(treeIter, "TestSinglyLinkedList.exp");
			Assert::IsTrue("Exact match found: ADS_Single_LinkedList_Exercises/Debug/ > TestSinglyLinkedList.exp <" == output);
		}

		TEST_METHOD(TestFindPartialFilename) {
			std::string xml = "<dir><name>ADS_Single_LinkedList_Exercises</name><dir><name>.git</name><file><name>config</name><length>353b</length><type>config</type></file><file><name>description</name><length>73b</length><type>description</type></file><file><name>HEAD</name><length>23b</length><type>HEAD</type></file></dir><dir><name>.vs</name><dir><name>ADS_Single_LinkedList_Exercises</name><dir><name>v17</name></dir></dir></dir><dir><name>Debug</name><file><name>SinglyLinkedList.pdb</name><length>978944b</length><type>pdb</type></file><file><name>TestSinglyLinkedList.exp</name><length>41528b</length><type>exp</type></file><file><name>TestSinglyLinkedList.pdb</name><length>1945600b</length><type>pdb</type></file></dir></dir>";
			Tree<File>* t = createFileSystem(xml);
			TreeIterator<File> treeIter(t);
			std::string output = findSearchItem(treeIter, "Debu");
			Assert::IsTrue("Potential match found: ADS_Single_LinkedList_Exercises/ > Debug <" == output);
		}

		TEST_METHOD(TestFindNonexistentFilename) {
			std::string xml = "<dir><name>ADS_Single_LinkedList_Exercises</name><dir><name>.git</name><file><name>config</name><length>353b</length><type>config</type></file><file><name>description</name><length>73b</length><type>description</type></file><file><name>HEAD</name><length>23b</length><type>HEAD</type></file></dir><dir><name>.vs</name><dir><name>ADS_Single_LinkedList_Exercises</name><dir><name>v17</name></dir></dir></dir><dir><name>Debug</name><file><name>SinglyLinkedList.pdb</name><length>978944b</length><type>pdb</type></file><file><name>TestSinglyLinkedList.exp</name><length>41528b</length><type>exp</type></file><file><name>TestSinglyLinkedList.pdb</name><length>1945600b</length><type>pdb</type></file></dir></dir>";
			Tree<File>* t = createFileSystem(xml);
			TreeIterator<File> treeIter(t);
			std::string output = findSearchItem(treeIter, "BeansAndToast.grom");
			Assert::IsTrue("No match was found for BeansAndToast.grom" == output);
		}

		TEST_METHOD(TestPrune) {
			std::string xml = "<dir><name>ADS_Single_LinkedList_Exercises</name><dir><name>.git</name><file><name>config</name><length>353b</length><type>config</type></file><file><name>description</name><length>73b</length><type>description</type></file><file><name>HEAD</name><length>23b</length><type>HEAD</type></file></dir><dir><name>.vs</name><dir><name>ADS_Single_LinkedList_Exercises</name><dir><name>v17</name></dir></dir></dir><dir><name>Debug</name><file><name>SinglyLinkedList.pdb</name><length>978944b</length><type>pdb</type></file><file><name>TestSinglyLinkedList.exp</name><length>41528b</length><type>exp</type></file><file><name>TestSinglyLinkedList.pdb</name><length>1945600b</length><type>pdb</type></file></dir></dir>";
			Tree<File>* t = createFileSystem(xml);
			TreeIterator<File> treeIter(t);
			int countBefore = countWithinDirectory(t);
			pruneTree(&treeIter);
			int countAfter = countWithinDirectory(t);
			Assert::AreNotEqual(countAfter, countBefore);
		}
	};
}
