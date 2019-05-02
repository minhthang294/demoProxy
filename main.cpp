#include <iostream>
#include "InternetBrowser.h"
#include "TCPConnection.h"
#include "TCPProxyConnection.h"

using namespace std;

int main()
{
    TCPProxyConnection* conn = new TCPProxyConnection();
    conn ->addSite("facebook.com");
    conn ->addSite("bbc.com.vn");
    conn->addSite("google.com");
    InternetBrowser browser;
    browser.setConnection(conn);
    browser.connect("bbc.com.vn");
    browser.connect("vnexpress.com");
    return 0;
}
