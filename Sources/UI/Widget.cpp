//
//  Widget.cpp
//  cppARPG
//
//  Created by Travis Racisz on 2026/03/25.
//

#include "Widget.hpp"

static u_int32_t nextWidgetId = 0;

Widget::Widget() {
    id = nextWidgetId++;
}
