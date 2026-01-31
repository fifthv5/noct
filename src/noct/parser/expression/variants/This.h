#pragma once

#include "noct/lexer/Token.h"

#include "noct/parser/expression/variants/UnresolvedType.h"

namespace Noct {

struct This {
	Token Keyword;
	size_t Slot { UNRESOLVED };
	size_t Depth { UNRESOLVED };
};

}
