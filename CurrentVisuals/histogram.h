//
//  histogram.h
//  sdltest
//
//  Created by josh freemont on 28/11/2013.
//  Copyright (c) 2013 josh freemont. All rights reserved.
//

#ifndef __sdltest__histogram__
#define __sdltest__histogram__

#include <iostream>
#include <SDL/SDL.h>
#include <vector>

class histogram
{
    //histogram variables
    int origX;
    int origY;
    int xLength;
    int yLength;
    double yScale;
    double xScale;
    int labelSize;
    int noBins;
    int binInterval;
    double yLabel;
    int xLabel;
    int* frequency;
    int maxFreq;
    int maxInput;
    
    //histogram event logic variables
    bool* IsBinSelectArray;
    int click_x;
    int click_y;
    bool IsAllSelect;
    bool IsCumulative;

    
public:
    histogram(int origXInit, int origYInit, int xLengthInit, int yLengthInit, int maxInputInit, int noBinsInit, int maxFreqInit);
    void add_point(int data_value);
    void scale_frequency(int max_value);
    void print_axes (SDL_Surface* screen);
    void print_histogram (SDL_Surface* screen);
    void reset_frequency ();
    void reset_maxFreq();
    int getbin (int discontinuity);
    
    //histogram event logic methods
    void inline reset_IsBinSelect_array ();
    void inline revert_mouse_unclicked();
    void handle_event(SDL_Event&);
    bool** getIsBinSelectArray();
    bool& getIsAllSelect();

};




#endif /* defined(__sdltest__histogram__) */
