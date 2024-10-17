#include "pch.h"
#include "CppUnitTest.h"

#include "../Dijkstra_DSA2/hash.cpp" 

#include <iostream>
#include <fstream>
#include <string>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace hash_tests
{
	TEST_CLASS(hash_tests)
	{
	public:
		
		TEST_METHOD(test_insert)
		{
			auto* hash_table = new hashTable(1003);
			std::string key = "key";
			std::string pass = "pass";
			hash_table->insert(key);
			hash_table->insert(pass);
			Assert::IsTrue(hash_table->contains(key));
			Assert::IsTrue(hash_table->contains(pass));
		}
		TEST_METHOD(test_insert_blank)
		{
			auto* hash_table = new hashTable(1003);
			std::string key = "key";
			std::string fake_key = "fakekey";
			hash_table->insert(key);
			Assert::IsFalse(hash_table->contains(fake_key));
		}
		TEST_METHOD(test_insert_remove)
		{
			auto* hash_table = new hashTable(1003);
			std::string key = "key";
			hash_table->insert(key);
			hash_table->remove(key);
			Assert::IsFalse(hash_table->contains(key));
		}
	};
}
