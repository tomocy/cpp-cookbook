#include "src/a/a.h"

#include "src/a/exceptions.h"

namespace a {
void A::DoA() const { throw Exception(); }
}  // namespace a