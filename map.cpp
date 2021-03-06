#include "stdafx.h"
#include <string>
#include <iostream>
#include <stdlib.h>
using namespace std;

#include <map>
#include <string>
#include <iterator>

//If specified key already existed in map then operator [] will 
//silently change its value where as insert will not replace already 
//added key instead it returns the information i.e. if element is added or not. e.

int main()
{
	std::map<std::string, int> mapOfWords;
	// Inserting data in std::map
	mapOfWords.insert(std::make_pair("earth", 1));
	mapOfWords.insert(std::make_pair("moon", 2));
	mapOfWords["sun"] = 3;
	// Will replace the value of already added key i.e. earth
	mapOfWords["earth"] = 4;
	// Iterate through all elements in std::map
	std::map<std::string, int>::iterator it = mapOfWords.begin();
	while (it != mapOfWords.end())
	{
		std::cout << it->first << " :: " << it->second << std::endl;
		it++;
	}
	// Check if insertion is successful or not
	if (mapOfWords.insert(std::make_pair("earth", 1)).second == false)
	{
		std::cout << "Element with key 'earth' not inserted because already existed" << std::endl;
	}
	// Searching element in std::map by key.
	if (mapOfWords.find("sun") != mapOfWords.end())
		std::cout << "word 'sun' found" << std::endl;
	if (mapOfWords.find("mars") == mapOfWords.end())
		std::cout << "word 'mars' not found" << std::endl;

	for (auto i : mapOfWords)
		cout << i.first << " " << i.second << endl;
	return 0;
}
