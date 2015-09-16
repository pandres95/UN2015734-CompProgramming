#ifndef _PROJECT_H_
#define _PROJECT_H_

#include <iostream>
#include <cstdlib>
#include <cmath>
#define PI (atan(1) * 4)

#ifdef _WIN32
    #define cls() system("cls")
    #define pause() system("pause")
#else
    #define cls() printf("\033[H\033[J")
    #define pause() system("read -p \"Press Enter to continue...\"")
#endif

#include <main.h>
#include <trig.h>
#include <phys.h>
#include <chem.h>
#include <biol.h>
#include <geom.h>

#endif
