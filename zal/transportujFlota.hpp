#pragma once

#include "Stocznia.hpp"

unsigned int transportujFlota(unsigned int towar)
{  
    int zaglowce = 0;

    if(towar = 0)
    {return 0;}
    else
    {
    for (int ilosctowaru = 0; ilosctowaru <= towar;)
    {
    Stocznia stocznia{};
    Statek* s1 = stocznia{};
    towar = towar + s1.transportuj();

    if (s1 == dynamic_cast<Zaglowiec*>(s1))
    {zaglowce++}
    else{}

    delete s1;
    }
    }


    return zaglowce;
}