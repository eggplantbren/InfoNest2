#ifndef InfoNest2_Walkable_h
#define InfoNest2_Walkable_h

#include <concepts>
#include <ostream>
#include "RNG.h"

namespace InfoNest2
{

// This header file defines the Walkable concept that a class must satisfy
// to work with InfoNest2.

template<typename T>
concept Walkable = requires(T t, RNG& rng, std::ostream& o)
{
    { t.generate(rng) } -> std::same_as<void>;
    { t.perturb(rng)  } -> std::convertible_to<double>;
    { o << t } -> std::same_as<std::ostream&>;
};


} // namespace

#endif
