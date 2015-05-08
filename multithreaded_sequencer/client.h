#ifndef CLIENT_H
#define CLIENT_H

#include "server.h"

class Client {
private:
	Server* seq;
public:
	void* request_next(void);
    void request_next_conc(void);
    void request_next_multiple(void);

	Client();
	void set_server(Server* my_serv);

};


#endif