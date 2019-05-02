#include "TCPConnection.h"

TCPConnection::TCPConnection()
{

}
bool TCPConnection::connect(string url)
{
    cout << "Connected to " << url << " via TCP protocol" << endl;
    return true;
}
TCPConnection::~TCPConnection()
{

}
