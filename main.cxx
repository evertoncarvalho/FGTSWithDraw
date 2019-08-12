#include "FGTSWithdrawConfig.h"
#include "FGTSRangeCalc.h"
#include <iostream>

using namespace FGTSWithdraw;

int main (int argc, char *argv[])
{
	FGTSRangeCalc calculator;
	std::cout << "versao " << FGTSWithdraw_VERSION_MAJOR
	      << "." << FGTSWithdraw_VERSION_MINOR << std::endl;
	int range;
	double withdrawAliquot, additionalWithdraw;
	calculator.getWithdrawRule(atof(argv[1]), &withdrawAliquot, &additionalWithdraw,&range);
	std::cout << "For balance of " << argv[1]// << "\n"
		<< "Aliquot: " << withdrawAliquot// << "\n"
		<< "Additional Withdraw: " << additionalWithdraw// << "\n"
		<< " range " << range << std::endl;
	return 0;
}
