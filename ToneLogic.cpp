
#include "ToneLookup.h"
#include <iostream>
#include <stdexcept>

namespace TelCoColorCoder
{
    ColorPair GetColorFromPairNumber(int pairNumber) {
        int zeroBasedPairNumber = pairNumber - 1;
        if (zeroBasedPairNumber < 0 ||
            zeroBasedPairNumber >= numberOfMajorColors * numberOfMinorColors) {
            throw std::out_of_range("Invalid pair number: " + std::to_string(pairNumber));
        }
        MajorColor majorColor = static_cast<MajorColor>(zeroBasedPairNumber / numberOfMinorColors);
        MinorColor minorColor = static_cast<MinorColor>(zeroBasedPairNumber % numberOfMinorColors);
        return ColorPair(majorColor, minorColor);
    }

    int GetPairNumberFromColor(MajorColor major, MinorColor minor) {
        if (major < 0 || major >= numberOfMajorColors) {
            throw std::out_of_range("Invalid MajorColor: " + std::to_string(major));
        }
        if (minor < 0 || minor >= numberOfMinorColors) {
            throw std::out_of_range("Invalid MinorColor: " + std::to_string(minor));
        }
        return major * numberOfMinorColors + minor + 1;
    }    
}
