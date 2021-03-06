//
//  patch.h
//  sdltest
//
//  Created by josh freemont on 11/02/2014.
//  Copyright (c) 2014 josh freemont. All rights reserved.
//

#ifndef __sdltest__patch__
#define __sdltest__patch__

#include <iostream>
#include "array2D.h"
#include <SDL/SDL.h>

class Spatch
{
    bool isActive;
    int size;
    int x;
    int y;
    int xScale;
    int yScale;
    array2D<double>* inNAddress;
    array2D<double>* inSAddress;
    array2D<double>* inEAddress;
    array2D<double>* inWAddress;

public:
    Spatch(const int &size, const int &x, const int &y, const int displayWidth, const int displayHeight, const int gridsize, array2D<double> &inN, array2D<double> &inS, array2D<double> &inE, array2D<double> &inW, double inNu, bool isActiveInit);
    void print (SDL_Surface* screen);
    void ablate ();
    void handleEvent(SDL_Event &event);

};

class SpatchST
{
    bool isActive;
    int size;
    int x;
    int y;
    int xScale;
    int yScale;
    array2D<double>* inNAddress;
    array2D<double>* inSAddress;
    array2D<double>* inEAddress;
    array2D<double>* inWAddress;

public:
    SpatchST(const int &size, const int &x, const int &y, const int displayWidth, const int displayHeight, const int gridsize, array2D<double> &inN, array2D<double> &inS, array2D<double> &inE, array2D<double> &inW, double inNu, bool isActiveInit);
    void print (SDL_Surface* screen);
    void ablate ();
    void handleEvent(SDL_Event &event);

};

class Cpatch
{
    bool isActive;
    int radius;
    int x;
    int y;
    int xScale;
    int yScale;
    array2D<double>* inNAddress;
    array2D<double>* inSAddress;

public:
    Cpatch(const int &size, const int &x, const int &y, const int displayWidth, const int displayHeight, const int gridsize, array2D<double> &inN, array2D<double> &inS, double inNu, bool isActiveInit);
    void print (SDL_Surface* screen);
    void handleEvent(SDL_Event &event);
};


#endif /* defined(__sdltest__patch__) */
