
#ifndef WIRE_PAIR_H
#define WIRE_PAIR_H

#include <string>
#include "ToneDefinitions.h"

namespace TelCoColorCoder
{
    class ColorPair;

    namespace Detail {
        std::string formatPair(const ColorPair& pair);
    }

    class ColorPair {
    private:
        MajorColor majorColor;
        MinorColor minorColor;
    public:
        ColorPair(MajorColor major, MinorColor minor);
        MajorColor getMajor() const;
        MinorColor getMinor() const;
        std::string ToString();
    };
}

#endif
