#pragma once

#include <string>

#include "noct/Environment.h"

namespace Noct {
class Module {
public:
	Module(std::string_view name);
	void AddSymbol(const EnvironmentVariable& var);

private:
	std::string m_Name;
	size_t m_SlotCount;
};

}
