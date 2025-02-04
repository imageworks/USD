//
// Copyright 2023 Pixar
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
////////////////////////////////////////////////////////////////////////

/* ************************************************************************** */
/* **                                                                      ** */
/* ** This file is generated by a script.                                  ** */
/* **                                                                      ** */
/* ** Do not edit it directly (unless it is within a CUSTOM CODE section)! ** */
/* ** Edit hdSchemaDefs.py instead to make changes.                        ** */
/* **                                                                      ** */
/* ************************************************************************** */

#include "pxr/imaging/hd/geomSubsetSchema.h"

#include "pxr/imaging/hd/retainedDataSource.h"

#include "pxr/base/trace/trace.h"

// --(BEGIN CUSTOM CODE: Includes)--
// --(END CUSTOM CODE: Includes)--

PXR_NAMESPACE_OPEN_SCOPE

TF_DEFINE_PUBLIC_TOKENS(HdGeomSubsetSchemaTokens,
    HD_GEOM_SUBSET_SCHEMA_TOKENS);

// --(BEGIN CUSTOM CODE: Schema Methods)--
// --(END CUSTOM CODE: Schema Methods)--

HdTokenDataSourceHandle
HdGeomSubsetSchema::GetType() const
{
    return _GetTypedDataSource<HdTokenDataSource>(
        HdGeomSubsetSchemaTokens->type);
}

HdIntArrayDataSourceHandle
HdGeomSubsetSchema::GetIndices() const
{
    return _GetTypedDataSource<HdIntArrayDataSource>(
        HdGeomSubsetSchemaTokens->indices);
}

/*static*/
HdContainerDataSourceHandle
HdGeomSubsetSchema::BuildRetained(
        const HdTokenDataSourceHandle &type,
        const HdIntArrayDataSourceHandle &indices
)
{
    TfToken _names[2];
    HdDataSourceBaseHandle _values[2];

    size_t _count = 0;

    if (type) {
        _names[_count] = HdGeomSubsetSchemaTokens->type;
        _values[_count++] = type;
    }

    if (indices) {
        _names[_count] = HdGeomSubsetSchemaTokens->indices;
        _values[_count++] = indices;
    }
    return HdRetainedContainerDataSource::New(_count, _names, _values);
}

HdGeomSubsetSchema::Builder &
HdGeomSubsetSchema::Builder::SetType(
    const HdTokenDataSourceHandle &type)
{
    _type = type;
    return *this;
}

HdGeomSubsetSchema::Builder &
HdGeomSubsetSchema::Builder::SetIndices(
    const HdIntArrayDataSourceHandle &indices)
{
    _indices = indices;
    return *this;
}

HdContainerDataSourceHandle
HdGeomSubsetSchema::Builder::Build()
{
    return HdGeomSubsetSchema::BuildRetained(
        _type,
        _indices
    );
}

/*static*/
HdTokenDataSourceHandle
HdGeomSubsetSchema::BuildTypeDataSource(
    const TfToken &type)
{

    if (type == HdGeomSubsetSchemaTokens->typeFaceSet) {
        static const HdRetainedTypedSampledDataSource<TfToken>::Handle ds =
            HdRetainedTypedSampledDataSource<TfToken>::New(type);
        return ds;
    }
    if (type == HdGeomSubsetSchemaTokens->typePointSet) {
        static const HdRetainedTypedSampledDataSource<TfToken>::Handle ds =
            HdRetainedTypedSampledDataSource<TfToken>::New(type);
        return ds;
    }
    if (type == HdGeomSubsetSchemaTokens->typeCurveSet) {
        static const HdRetainedTypedSampledDataSource<TfToken>::Handle ds =
            HdRetainedTypedSampledDataSource<TfToken>::New(type);
        return ds;
    }
    // fallback for unknown token
    return HdRetainedTypedSampledDataSource<TfToken>::New(type);
} 

PXR_NAMESPACE_CLOSE_SCOPE