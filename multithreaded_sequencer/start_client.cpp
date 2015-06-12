#include "server.h"
#include "client.h"
#include "time.h"
#include <iostream>
#include "string"
#include <thread>

using namespace std;

int main()
{
	const int num_clients = 10;
	Client clients[num_clients];
	Server* sequencer = new Server();
	for ( int i  = 0 ; i < num_clients ; i++)
	{
		clients[i].set_server(sequencer);
	}

	clients[0].Run();

}

