#include "Logger.h"

Logger::Logger(std::string filename)
{
	file.open(filename, std::ofstream::app);
}

void Logger::print(std::string text)
{
	file << text << std::endl;
}