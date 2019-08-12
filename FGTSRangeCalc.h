
namespace FGTSWithdraw
{
	class FGTSRangeCalc
	{
		public:
			FGTSRangeCalc();
			void getWithdrawRule (double currentBalance,
					double * outWithdrawAliquot,
				       	double * outAdditionalWithdraw,
					int * outRange);
	};
};
