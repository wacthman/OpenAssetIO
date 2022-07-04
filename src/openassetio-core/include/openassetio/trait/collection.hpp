// SPDX-License-Identifier: Apache-2.0
// Copyright 2013-2022 The Foundry Visionmongers Ltd
/**
 * Typedefs for the trait property data stored within specifications.
 */
#pragma once

#include <unordered_set>
#include <vector>

#include <openassetio/export.h>
#include <openassetio/trait/property.hpp>
#include <openassetio/typedefs.hpp>

namespace openassetio {
inline namespace OPENASSETIO_CORE_ABI_VERSION {
namespace trait {
/**
 * A collection of trait IDs
 *
 * ID collections are a set, rather than a list. In that,
 * no single ID can appear more than once and the order of the IDs
 * has no meaning and is not preserved.
 */
using TraitSet = std::unordered_set<TraitId>;
}  // namespace trait
}  // namespace OPENASSETIO_CORE_ABI_VERSION
}  // namespace openassetio
