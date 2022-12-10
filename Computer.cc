#include "Computer.h"

Define_Module(Computer);

void Computer::initialize()
{
    if(strcmp(getName(), "c1")==1){
        cMessage *msg = new cMessage("My Message");
        send(msg, "out");
    }
}

void Computer::handleMessage(cMessage *msg)
{
    send(msg, "out");
}
