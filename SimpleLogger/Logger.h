#pragma once

#ifndef LOGGER_H
#define LOGGER_H

#include <iostream>
#include <string>
#include <fstream>

class Logger
{
private:
	std::string filename;
	std::ofstream file;
public:
	Logger(std::string filename);
	void print(std::string txt);
};

#endif