#include "client.h"

void Client::set_server(Server* my_serv)
{
	seq = my_serv;
}

Client::Client() { }


long Client::request_next()
{
	return seq->get_and_add(1);
}