#include "FGTSRangeCalc.h"
#include "FGTSRangeLimits.h"

namespace FGTSWithdraw
{
	FGTSRangeCalc::FGTSRangeCalc(){}
	
	void FGTSRangeCalc::getWithdrawRule(double currentBalance,
			double * outWithdrawAliquot, double * outAdditionalWithdraw,
			int * outRange)
	{
		if (currentBalance <= BALANCE_RANGE_1)
		{
			*outRange = 1;
		       	*outWithdrawAliquot = WITHDRAW_ALIQUOT_1;
			*outAdditionalWithdraw = ADDITIONAL_WITHDRAW_1;
		}
		if (currentBalance <= BALANCE_RANGE_2)
		{
			*outRange = 2;
			*outWithdrawAliquot = WITHDRAW_ALIQUOT_2;
			*outAdditionalWithdraw = ADDITIONAL_WITHDRAW_2;
		}
		if (currentBalance <= BALANCE_RANGE_3)
		{
			*outRange = 3;
			*outWithdrawAliquot = WITHDRAW_ALIQUOT_3;
			*outAdditionalWithdraw = ADDITIONAL_WITHDRAW_3;
		}
		if (currentBalance <= BALANCE_RANGE_4)
		{
			*outRange = 4;
			*outWithdrawAliquot = WITHDRAW_ALIQUOT_4;
			*outAdditionalWithdraw = ADDITIONAL_WITHDRAW_4;
		}
		if (currentBalance <= BALANCE_RANGE_5)
		{
			*outRange = 5;
			*outWithdrawAliquot = WITHDRAW_ALIQUOT_5;
			*outAdditionalWithdraw = ADDITIONAL_WITHDRAW_5;
		}
		if (currentBalance <= BALANCE_RANGE_6)
		{
			*outRange = 6;
			*outWithdrawAliquot = WITHDRAW_ALIQUOT_6;
			*outAdditionalWithdraw = ADDITIONAL_WITHDRAW_6;
		}
		*outRange = 7;
		*outWithdrawAliquot = WITHDRAW_ALIQUOT_7;
		*outAdditionalWithdraw = ADDITIONAL_WITHDRAW_7;
	}
};
