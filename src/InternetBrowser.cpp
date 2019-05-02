#include "InternetBrowser.h"

InternetBrowser::InternetBrowser()
{
    _connection =0;
}
void InternetBrowser::setConnection(InternetConnection* connection)
{
    _connection = connection;
}
void InternetBrowser::connect(string url)
{
    if (_connection == 0)
    {
        cout << "Connection is not ready" << endl;
    }
    else if (!_connection->connect(url))
    {
        cout << "Access is denied for " << url << endl;
    }
    else {
        cout << "Start browsing..." << endl;
    }
}

InternetBrowser::~InternetBrowser()
{
    //dtor
}
