#pragma once

#include <string>
#include <variant>

#include "noct/parser/expression/ClassInstanceFwd.h"
#include "noct/parser/expression/ICallableFwd.h"

namespace Noct {

using NoctObject = std::variant<
    std::monostate,
    double,
    std::string,
    bool,
    ClassInstanceRef,
    CallableRef>;

}
