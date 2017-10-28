#ifndef FINANCE_EXITCONDITIONS_IEXITCONDITION_HPP_
#define FINANCE_EXITCONDITIONS_IEXITCONDITION_HPP_


class IExitCondition
{
public:


	// A condition should return true if it is met, which indicates the position
	// should be exited
	~IExitCondition() = default;

	virtual bool evaluate() = 0;
};


#endif
