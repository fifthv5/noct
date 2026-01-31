#pragma once

#include "noct/lexer/Token.h"

#include "noct/parser/expression/ExpressionFwd.h"

#include "noct/parser/expression/variants/UnresolvedType.h"

namespace Noct {

struct Assign {
	Token Name;
	ExpressionPtr Value;

	size_t Slot { UNRESOLVED };
	size_t Depth { UNRESOLVED };
};

}
