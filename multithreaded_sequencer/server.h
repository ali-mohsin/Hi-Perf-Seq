#ifndef SERVER_H
#define SERVER_H

class Server {
private:
	long counter;
public: 
	long get_and_add(int range);
	Server();
};


#endif