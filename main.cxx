#include "FGTSWithdrawConfig.h"
#include "FGTSRangeCalc.h"
#include <iostream>

using namespace FGTSWithdraw;

void printUsage()
{
	std::cout << "You need to pass your current balance in FGTS account, something like:\n"
		<< " ./FGTSWithdraw 10000"
		<< std::endl;
}

int main (int argc, char *argv[])
{
	if (argc != 2)
	{
		printUsage();
		return 0;
	}

	FGTSRangeCalc calculator;
	std::cout << "versao " << FGTSWithdraw_VERSION_MAJOR
	      << "." << FGTSWithdraw_VERSION_MINOR << std::endl;
	int range;
	double withdrawAliquot, additionalWithdraw;
	calculator.getWithdrawRule(atof(argv[1]), &withdrawAliquot, &additionalWithdraw,&range);
	std::cout << "For balance of " << argv[1]// << "\n"
		<< " Aliquot: " << withdrawAliquot// << "\n"
		<< " Additional Withdraw: " << additionalWithdraw// << "\n"
		<< " range " << range << std::endl;
	return 0;
}
