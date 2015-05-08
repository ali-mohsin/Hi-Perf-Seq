#include "server.h"
#include "client.h"
#include "time.h"
#include <iostream>
#include "string"
#include <thread>

using namespace std;

void test_basic(Client* clients, int iterations)
{
	Client ck = clients[0];
	for(int i = 0; i < iterations; i++)
	{
		ck.request_next();
	}

}

void test_concurrent(Client* clients, int iterations)
{

  std::thread t1(&Client::request_next_multiple, clients[0]);
  std::thread t2(&Client::request_next_multiple, clients[1]);
  std::thread t3(&Client::request_next_multiple, clients[2]);
  std::thread t4(&Client::request_next_multiple, clients[3]);

  t1.join();
  t2.join();
  t3.join();
  t4.join();

}



void calculate_diff(clock_t t1, clock_t t2, string str)
{

	float diff = ((float)t2-(float)t1);
    cout<<str<<diff/CLOCKS_PER_SEC<<endl;
}

int main()
{
	const int num_clients = 10;
	Client clients[num_clients];
	Server* sequencer = new Server();
	for ( int i  = 0 ; i < num_clients ; i++)
	{
		clients[i].set_server(sequencer);
	}

	int M = 1000000;
	clock_t t1, t2; 

	t1 = clock();
	test_basic(clients,1000 * M);
	t2 = clock();
	calculate_diff(t1,t2,"Time for basic, 1 client 1 server, 1000M increments: ");




	t1 = clock();
	test_concurrent(clients,1000*M);
	t2 = clock();
	calculate_diff(t1,t2,"Time for concurrent, 4 client 1 server, 1000M increments: ");
}

