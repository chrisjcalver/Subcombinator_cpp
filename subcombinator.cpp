#include <iostream>
#include <stack>
//define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
//define CATCH_CONFIG_ENABLE_BENCHMARKING
#include <catch2/catch_all.hpp>

//std::uint64_t Fibonacci(std::uint64_t number) {
    //return 5;
    //return number < 2 ? 1 : Fibonacci(number - 1) + Fibonacci(number - 2);
//}
/*
TEST_CASE("Fibonacci") {
    CHECK(Fibonacci(0) == 1);
    // some more asserts..
    CHECK(Fibonacci(5) == 8);
    // some more asserts..

    // now let's benchmark:
    BENCHMARK("Fibonacci 20") {
        return Fibonacci(20);
    };

    BENCHMARK("Fibonacci 25") {
        return Fibonacci(25);
    };

    BENCHMARK("Fibonacci 30") {
        return Fibonacci(30);
    };

    BENCHMARK("Fibonacci 35") {
        return Fibonacci(35);
    };
}
*/
/*
int foo (int integer){

	int new_integer = integer + 5;

	return new_integer;
}
*/
/*
# The implementation is stored in a subcombinator class

# # nodes are defined as a triple of unique node identifier, term, number of incoming edges

# # Terms are defined as an array of subterms that are either a string or an array.
# # This mimics the behaviour of variables and brackets and allows to easily identify what is being
# # referenced by the lambda abstractions

# # Incoming port edges are stored here as well as it makes checking for the one incoming port edge
# # condition of rule 1 much easier, this isn't required for the tree implementation but is left in for portability to graph reduction.

# nodes = [

# ( 1, [ "y" , [ "λf" , "λx" , "f" ,  [ "f", "x" ] ] , "s" , "z" ], 1 ) ,
# ( 2, [ "λf" , "λx" , "f", [ "f", "x" ] ] , 1 ) ,
# ( 3, ["s"], 1) ,
# ( 4, ["0"], 1)
# ]

# # edges

# # edges are stored as an array of arrays with the first entry the node identifier of the base term
# # of that edge. This allows for more efficient copying of all edges that lead off from a certain node

# node_edges = [

#         [ 1 , ("y", 2) , ("s", 3), ("z", 4 ) ]
*/


class Subcombinator{

    class Node {
    };

    class Edge{
    };

    class Reduction{
    };

    std::string lambda_term_string;
    std::vector<Node> nodes;
    std::vector<Edge> edges;
    std::array<char,26> constants;
    std::stack<char> variable_stack;
    int term_count;
    std::vector<Reduction> potential_reductions;


    public:
    Subcombinator(std::string input_lambda_term_string){

    lambda_term_string = input_lambda_term_string;
    nodes = {};
    edges = {};
    constants = {'S','0'};


    std::array<char, 26> variable_array = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'x', 'y', 'z'};


    for (char variable_letter : variable_array)
    {
        variable_stack.push(variable_letter);
        }

    }


};

int main()

{

//    Catch::Session session; #// There must be exactly one instance

//    int returnCode = session.applyCommandLine( argc, argv );
//  	if( returnCode != 0 ) #// Indicates a command line error
//       return 0;

    //int result = Catch::Session().run();

    Subcombinator subcombinator("a");

    std::cout << "Hello, World!" << std::endl;

    //int numFailed = session.run();

    return 0;
}
