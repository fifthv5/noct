#pragma once

#include <cstddef>

#include "noct/lexer/Token.h"

#include "noct/parser/expression/variants/UnresolvedType.h"

namespace Noct {

struct Variable {
	Token Name;
	size_t Slot { UNRESOLVED };
	size_t Depth { UNRESOLVED };
};

}
