#include <iostream>

class HelloWorld
{
public:
	HelloWorld ()
	{
		std::cout << "Hello World!" << std::endl;
	}

	~HelloWorld ()
	{ }
};


static HelloWorld helloWorld;


int main ( int argc, char** argv )
{
	return EXIT_SUCCESS;
}