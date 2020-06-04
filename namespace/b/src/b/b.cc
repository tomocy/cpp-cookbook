#include "src/b/b.h"

#include "external/a/src/a/a.h"
#include "src/b/exceptions.h"

namespace b {
void B::DoB() const {
  try {
    auto a = a::A();
    a.DoA();
  } catch (const a::Exception& e) {
    throw Exception();
  }
}
}  // namespace b