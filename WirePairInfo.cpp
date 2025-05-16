
#include "WirePair.h"
#include "ToneLabels.h"


namespace TelCoColorCoder
{

    ColorPair::ColorPair(MajorColor major, MinorColor minor)
        : majorColor(major), minorColor(minor) {}

    MajorColor ColorPair::getMajor() const {
        return majorColor;
    }

    MinorColor ColorPair::getMinor() const {
        return minorColor;
    }

    std::string ColorPair::ToString() {
        return Detail::formatPair(*this);
    }

    namespace Detail {
        std::string formatPair(const ColorPair& pair) {
            return MajorColorNames[pair.getMajor()] + " " + MinorColorNames[pair.getMinor()];
        }
    }
}
