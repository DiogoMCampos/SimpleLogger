#include "Logger.h"

int main()
{
	Logger log("log.txt");

	log.print("Logger Test: First line");
	log.print("Second line.\n");
	log.print("Fourth line.");

	return 0;
}	