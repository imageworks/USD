//
// Copyright 2016 Pixar
//
// Licensed under the Apache License, Version 2.0 (the "Apache License")
// with the following modification; you may not use this file except in
// compliance with the Apache License and the following modification to it:
// Section 6. Trademarks. is deleted and replaced with:
//
// 6. Trademarks. This License does not grant permission to use the trade
//    names, trademarks, service marks, or product names of the Licensor
//    and its affiliates, except as required to comply with Section 4(c) of
//    the License and to reproduce the content of the NOTICE file.
//
// You may obtain a copy of the Apache License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the Apache License with the above modification is
// distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
// KIND, either express or implied. See the Apache License for the specific
// language governing permissions and limitations under the Apache License.
//
#ifndef PXR_IMAGING_HD_ST_POINTS_SHADER_KEY_H
#define PXR_IMAGING_HD_ST_POINTS_SHADER_KEY_H

#include "pxr/pxr.h"
#include "pxr/imaging/hd/version.h"
#include "pxr/imaging/hd/enums.h"
#include "pxr/imaging/hdSt/geometricShader.h"
#include "pxr/imaging/hdSt/shaderKey.h"
#include "pxr/base/tf/token.h"

PXR_NAMESPACE_OPEN_SCOPE

struct HdSt_PointsShaderKey : public HdSt_ShaderKey
{
    HDST_API
    HdSt_PointsShaderKey();
    HDST_API
    ~HdSt_PointsShaderKey();

    TfToken const &GetGlslfxFilename() const override { return glslfx; }
    TfToken const *GetVS() const override { return VS; }
    // Skip TCS, TES and GS stages
    TfToken const *GetFS() const override { return FS; }

    HdSt_GeometricShader::PrimitiveType GetPrimitiveType() const override {
        return HdSt_GeometricShader::PrimitiveType::PRIM_POINTS; 
    }

    TfToken glslfx;
    TfToken VS[6];
    TfToken FS[6];
};


PXR_NAMESPACE_CLOSE_SCOPE

#endif  // HDST_POINTS_SHADER_KEY
