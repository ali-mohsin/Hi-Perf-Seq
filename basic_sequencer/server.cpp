#include "server.h"

Server::Server()
{
	counter = 0;
}

long Server::get_and_add(int range)
{
	long current = counter;
	counter = counter + range;
	return current;
}