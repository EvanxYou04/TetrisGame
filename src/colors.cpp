#include "colors.h"

const Color grey = {35, 21, 40, 255};
const Color blue = {3, 65, 174, 255};
const Color green = {114, 203, 59, 255};
const Color yellow = {255, 213, 1, 255};
const Color orange = {255, 151, 28, 255};
const Color red = {255, 50, 19, 255};
const Color purple = {171, 0, 235, 255};
const Color cyan = {15, 240, 245, 255};

std::vector<Color> GetCellColors()
{
    return {grey, blue, green, yellow, orange, red, purple, cyan};
}