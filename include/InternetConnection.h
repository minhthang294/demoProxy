#ifndef INTERNETCONNECTION_H
#define INTERNETCONNECTION_H
#include <iostream>
#include <string>

using namespace std;

class InternetConnection
{
    public:
        InternetConnection();
        virtual bool connect(string url) = 0;
        virtual ~InternetConnection();

    protected:

    private:
};

#endif // INTERNETCONNECTION_H
