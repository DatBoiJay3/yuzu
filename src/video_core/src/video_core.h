// Copyright 2014 Citra Emulator Project
// Licensed under GPLv2
// Refer to the license.txt file included.

#pragma once

#include "common.h"
#include "emu_window.h"
#include "renderer_base.h"

////////////////////////////////////////////////////////////////////////////////////////////////////
// Video Core namespace

namespace VideoCore {

// 3DS Video Constants
// -------------------

static const int kScreenTopWidth        = 400;  ///< 3DS top screen width
static const int kScreenTopHeight       = 240;  ///< 3DS top screen height
static const int kScreenBottomWidth     = 320;  ///< 3DS bottom screen width
static const int kScreenBottomHeight    = 240;  ///< 3DS bottom screen height

//  Video core renderer
// ---------------------

extern RendererBase*   g_renderer;              ///< Renderer plugin
extern int             g_current_frame;         ///< Current frame

/// Start the video core
void Start();

/// Initialize the video core
void Init(EmuWindow* emu_window);

/// Shutdown the video core
void Shutdown();

} // namespace
