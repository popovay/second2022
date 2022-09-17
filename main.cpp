#include <iostream>
#include "TXLib.h"

using namespace std;

int main()
{
    txCreateWindow ( 800, 600);
    txSetFillColor (TX_YELLOW);
    for (int i=0; i<800; i=i+10)
    {
        txRectangle (100+i, 100, 200+i, 200);
        txSleep(100);
    }
}
