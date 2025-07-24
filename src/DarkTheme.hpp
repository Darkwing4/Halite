#ifndef DARK_THEME_HPP
#define DARK_THEME_HPP

#include "stdAfx.hpp"

namespace hal {
    inline bool& dark_theme_enabled()
    {
        static bool enabled = true;
        return enabled;
    }

    inline HBRUSH dark_background_brush()
    {
        static HBRUSH brush = CreateSolidBrush(RGB(32,32,32));
        return brush;
    }
}

#endif // DARK_THEME_HPP
