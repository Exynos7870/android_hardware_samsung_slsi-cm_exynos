#include "ExynosDisplay.h"

ExynosDisplay::ExynosDisplay(int numGSCs __unused)
{
}

ExynosDisplay::~ExynosDisplay()
{
}

int ExynosDisplay::getDeconWinMap(int overlayIndex, int totalOverlays)
{
    if (totalOverlays == 4 && overlayIndex == 3)
        return 4;
    return overlayIndex;
}

int ExynosDisplay::prepare(hwc_display_contents_1_t *contents __unused)
{
    return 0;
}

int ExynosDisplay::set(hwc_display_contents_1_t *contents __unused)
{
    return 0;
}

void ExynosDisplay::freeMPP()
{
}
