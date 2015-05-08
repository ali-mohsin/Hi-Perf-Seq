#include "client.h"
#include <pthread.h>
#include <iostream>
using namespace std;


void Client::set_server(Server* my_serv)
{
	seq = my_serv;
}

Client::Client() { }


void* Client::request_next()
{
	seq->get_and_add(1);
	return 0;
}

void Client::request_next_multiple()
{
	int M = 1000000;
	int count = 250 * M;
	for(int i=0 ; i < count ; i++){
		seq->get_and_add(1);
	}
}


// void Client::request_next_conc() {
//   Thread2Ptr   t = &Client::request_next_multiple;
//   PthreadPtr   p = *(PthreadPtr*)&t;
//   pthread_t    tid;
//   if (pthread_create(&tid, 0, p, this) == 0)
//     pthread_detach(tid);
//   cout<<"creating thread\n";
// }