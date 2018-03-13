#include "Stop.h"

Stop::Stop(string n, int distance) : name(n), distanceToNext(distance){}


string Stop::getName()
{
    return name;
}

void Stop::setName(string n)
{
    this->name = n;
}

int Stop::getDistanceToNext()
{
    return distanceToNext;
}

void Stop::setDistanceToNext(int distance)
{
    this->distanceToNext = distance;
}
