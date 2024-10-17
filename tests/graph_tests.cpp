#include "pch.h"
#include "CppUnitTest.h"

#include "../Dijkstra_DSA2/graph.cpp" 

#include <iostream>
#include <fstream>
#include <string>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace graph_tests
{
	TEST_CLASS(graph_tests)
	{
	public:

		TEST_METHOD(add_edge)
		{
			graph dag;
			string output = "graph_output.txt";
			dag.addEdge("v1", "v2", 5);

			dag.dijkstra("v1");

			dag.outputDijkstra("v1", output);

			Assert::AreEqual(1, 1);


		}
	};
}
