//
//  state.h
//  sdltest
//
//  Created by josh freemont on 05/12/2013.
//  Copyright (c) 2013 josh freemont. All rights reserved.
//

#ifndef __sdltest__state__
#define __sdltest__state__

#include <iostream>
#include <SDL/SDL.h>
#include "mtrand.h"

class state_display
{
    //coordinates and display size parameters
    int grid_size;
    int origin_x_coord;
    int origin_y_coord;
    int sWidth;
    int sHeight;
    int sElements;
    int xScale;
    int yScale;
    
    //state display logic parameters
    bool IsZoomed;
    bool IsStateView;
    bool IsDiscView;
    bool IsBreakView;
    int click_x;
    int click_y;
    bool** IsDisc;
    bool* IsAllDisc;
    
    
public:
    state_display (int origin_x_coord, int origin_y_coord,
                   int grid_size, int sWidth, int sHeight, int sElements, bool** histoIsBinSelect, bool& histoIsAllSelect);
    
    inline double r(double ratio);
    inline double b(double ratio);
    inline double g(double ratio);
   
    void state_putpixel(SDL_Surface* , int i , int j , double RP_ratio, int RP);
    void disc_putpixel(SDL_Surface* screen, int x, int y, int disc, const int &discId);
    void break_putpixel(SDL_Surface* screen, int x, int y, const int &breakId);
    inline double manual_rand(int seed, int maximum);
    
    //state display logic methods
    inline void ToggleStateView();
    inline void ToggleDiscView();
    inline void ToggleBreakView();
    bool getIsStateView();
    bool getIsDiscView();
    void handle_event(SDL_Event&);
    int get_x();
    int get_y();
   
};

#endif /* defined(__sdltest__state__) */