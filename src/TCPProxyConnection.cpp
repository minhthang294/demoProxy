#include "TCPProxyConnection.h"

TCPProxyConnection::TCPProxyConnection()
{
    _curr = 0;
}
void TCPProxyConnection::addSite(string url)
{
    _restrictSites[_curr] = url;
    _curr = (_curr + 1) % 10;
}

bool TCPProxyConnection::connect(string url)
{
    for (int i = 0; i < 10; i++)
    {
        if (_restrictSites[i].compare(url)==0)
            return false;
    }
    _realConnection.connect(url);
    return true;
}
TCPProxyConnection::~TCPProxyConnection()
{
    //dtor
}
