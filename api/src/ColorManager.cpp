#include "ColorManager.h"
#include <ncurses.h>

ColorManager::ColorManager()
{
    start_color();
}

void ColorManager::setColorPair(const short pair, const short fg, const short bg)
{
    init_pair(pair, fg, bg);
}

void ColorManager::useColorPair(const short pair)
{
    attron(COLOR_PAIR(pair));
}

void ColorManager::resetColor()
{
    attroff(A_COLOR);
}
