#include <iostream>
#include <fstream>


int main() {

	std::fstream inputFileA;
	std::fstream inputFileB;
	std::string holder;
	int wordCounter = 0;
	inputFileA.open("Readme.txt");
	if (inputFileA.fail())
	{
		std::cout << "Failed to Load";
	}


		if (!inputFileA.fail())
		{
			while (inputFileA >> holder)
			{
				std::cout << holder << std::endl ;
				wordCounter++;
			}
		}
		std::cout << "Total Numbers of Words: " << wordCounter;
}

