// Copyright (c) Microsoft Corporation. All rights reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License"); you may
// not use these files except in compliance with the License. You may obtain
// a copy of the License at http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
// WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the
// License for the specific language governing permissions and limitations
// under the License.

// This file was automatically generated. Please do not edit it manually.

#include "pch.h"
#include "..\CanvasEffect.h"
#include "BlendEffect.h"

namespace ABI { namespace Microsoft { namespace Graphics { namespace Canvas { namespace Effects
{
    BlendEffect::BlendEffect()
        : CanvasEffect(CLSID_D2D1Blend, 1, 2, true)
    {
        // Set default values
        SetProperty(D2D1_BLEND_PROP_MODE, static_cast<uint32_t>(D2D1_BLEND_MODE_MULTIPLY), true);
    }

    IMPLEMENT_ENUM_PROPERTY(BlendEffect,
        Mode,
        BlendEffectMode,
        D2D1_BLEND_PROP_MODE)

    IMPLEMENT_INPUT_PROPERTY(BlendEffect,
        Background,
        0)

    IMPLEMENT_INPUT_PROPERTY(BlendEffect,
        Foreground,
        1)

    ActivatableClass(BlendEffect);
}}}}}
