#ifndef INTERNETBROWSER_H
#define INTERNETBROWSER_H
#include "InternetConnection.h"
#include <iostream>
#include <string>

class InternetBrowser
{
    public:
        InternetBrowser();
        void connect (string url);
        void setConnection(InternetConnection* connection);
        virtual ~InternetBrowser();

    protected:

    private:
        InternetConnection* _connection;
};

#endif // INTERNETBROWSER_H
