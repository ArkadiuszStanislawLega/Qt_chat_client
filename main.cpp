#include <QCoreApplication>
#include "client.h"

#define PORT 2020
#define IP "127.0.0.1"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Client client;
    client.connectToHost(IP, PORT);
    return a.exec();
}
