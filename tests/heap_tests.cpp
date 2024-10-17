#include "pch.h"
#include "CppUnitTest.h"

#include "../Dijkstra_DSA2/heap.cpp" 

#include <iostream>
#include <fstream>
#include <string>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace heap_tests
{
	TEST_CLASS(heap_tests)
	{
	public:

		TEST_METHOD(test_min)
		{
			int capacity = 3;
			string temp;
			string comp_temp = "one";
			int key;
			int comp_key = 1;
			heap min_heap(capacity);
			min_heap.insert("four", 4);
			min_heap.insert("one", 1);
			min_heap.insert("five", 5);
			
			
			min_heap.deleteMin(&temp, &key);

			Assert::AreEqual(comp_temp, temp);
			Assert::AreEqual(comp_key, key);

			comp_temp = "four";
			comp_key = 4;
			min_heap.deleteMin(&temp, &key);

			Assert::AreEqual(comp_temp, temp);
			Assert::AreEqual(comp_key, key);

			comp_temp = "five";
			comp_key = 5;
			min_heap.deleteMin(&temp, &key);

			Assert::AreEqual(comp_temp, temp);
			Assert::AreEqual(comp_key, key);

		}
		TEST_METHOD(test_delete)
		{
			int capacity = 3;
			string temp;
			string comp_temp = "one";
			int key;
			int comp_key = 1;
			heap min_heap(capacity);
			min_heap.insert("four", 4);
			min_heap.insert("one", 1);
			min_heap.insert("five", 5);

			min_heap.remove("four");
			
			min_heap.deleteMin(&temp, &key);

			Assert::AreEqual(comp_temp, temp);
			Assert::AreEqual(comp_key, key);

			comp_temp = "five";
			comp_key = 5;
			min_heap.deleteMin(&temp, &key);

			Assert::AreEqual(comp_temp, temp);
			Assert::AreEqual(comp_key, key);
		}
	};
}
