#ifndef CLIENT_H
#define CLIENT_H

#include "server.h"

class Client {
private:
	Server* seq;
public:
	long request_next();
	Client();
	void set_server(Server* my_serv);
};


#endif