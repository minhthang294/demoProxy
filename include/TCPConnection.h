#ifndef TCPCONNECTION_H
#define TCPCONNECTION_H
#include <iostream>
#include <string>
#include <InternetConnection.h>

using namespace std;

class TCPConnection : public InternetConnection
{
    public:
        TCPConnection();
        bool connect(string url);
        virtual ~TCPConnection();

    protected:

    private:
};

#endif // TCPCONNECTION_H
