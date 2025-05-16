
#ifndef TONE_LOOKUP_H
#define TONE_LOOKUP_H

#include "WirePair.h"

namespace TelCoColorCoder
{
    ColorPair GetColorFromPairNumber(int pairNumber);
    int GetPairNumberFromColor(MajorColor major, MinorColor minor);
}

#endif
