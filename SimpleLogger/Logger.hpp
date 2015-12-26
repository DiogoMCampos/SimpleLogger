#ifndef LOGGER_HPP
#define LOGGER_HPP

#include <iostream>
#include <string>
#include <fstream>

class Logger
{
private:
	std::string filename;
	std::ofstream file;
public:
	// Logger Constructor
	// app (append) flag makes all output operations happen at the end of the file
	Logger(std::string filename) 
	{ 
		file.open(filename, std::ofstream::app); 
	}
	
	// Print to file
	template <class T>
	void print(T arg)
	{
		file << arg << std::endl;
	}
};

#endif