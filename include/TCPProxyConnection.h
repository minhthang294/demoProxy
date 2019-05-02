#ifndef TCPPROXYCONNECTION_H
#define TCPPROXYCONNECTION_H
#include "TCPConnection.h"
#include "InternetConnection.h"


class TCPProxyConnection : public InternetConnection
{
    public:
        TCPProxyConnection();
        bool connect(string url);
        void addSite(string url);
        virtual ~TCPProxyConnection();

    protected:

    private:
        string _restrictSites[10];
        TCPConnection _realConnection;
        int _curr;
};

#endif // TCPPROXYCONNECTION_H
