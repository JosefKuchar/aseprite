// Aseprite
// Copyright (C) 2015-2016  David Capello
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License version 2 as
// published by the Free Software Foundation.

#ifndef APP_SCRIPT_SPRITE_CLASS_H_INCLUDED
#define APP_SCRIPT_SPRITE_CLASS_H_INCLUDED
#pragma once

#include "script/engine.h"

namespace app {

  void register_sprite_class(script::index_t idx, script::Context& ctx);

} // namespace app

#endif
