//= ColorSchemeTools -> Written by Unusuario2, https://github.com/Unusuario2  ==//
//
// Purpose: 
//
// License:
//        MIT License
//
//        Copyright (c) 2025 [un usuario], https://github.com/Unusuario2
//
//        Permission is hereby granted, free of charge, to any person obtaining a copy
//        of this software and associated documentation files (the "Software"), to deal
//        in the Software without restriction, including without limitation the rights
//        to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
//        copies of the Software, and to permit persons to whom the Software is
//        furnished to do so, subject to the following conditions:
//
//        The above copyright notice and this permission notice shall be included in all
//        copies or substantial portions of the Software.
//
//        THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//        IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//        FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//        AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//        LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
//        OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
//        SOFTWARE.
//
// $NoKeywords: $
//==============================================================================//
#ifndef COLORSCHEMETOOLS_H
#define COLORSCHEMETOOLS_H

#ifdef _WIN32
#pragma once
#endif // _WIN32

#include "color.h"

#define ColorWhite			Color(255, 255, 255, 255)
#define ColorMagenta		Color(255, 0, 255, 255)
#define ColorBlue			Color(0, 0, 255, 255)
#define ColorCyan			Color(0,255,255,255)
#define ColorGreen			Color(0,255,0,255)
#define ColorRed			Color(255,0,0,255)
#define ColorBlack			Color(0, 0, 0, 255)
#define ColorGrey			Color(0, 0, 0, 128)
#define ColorYellow			Color(255, 255, 0, 255)
#define ColorYellowDark		Color(255, 255, 0)

#define ColorHeader			ColorCyan
#define ColorPath			ColorYellowDark
#define ColorWarning		ColorYellow
#define ColorSucesfull		ColorGreen
#define ColorUnSucesfull	ColorRed
#define ColorLowIntensity	ColorGrey


#endif // COLORSCHEMETOOLS_H

