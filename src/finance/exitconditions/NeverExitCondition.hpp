#ifndef FINANCE_EXITCONDITIONS_NEVEREXITCONDITION_HPP_
#define FINANCE_EXITCONDITIONS_NEVEREXITCONDITION_HPP_

#include "IExitCondition.hpp"

class NeverExitCondition : public IExitCondition
{


public:

	bool evaluate() override;
};

#endif
