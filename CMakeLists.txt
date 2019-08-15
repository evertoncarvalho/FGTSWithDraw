cmake_minimum_required (VERSION 2.6)
project (FGTSWithdraw)
# The version number
set (FGTSWithdraw_VERSION_MAJOR 1)
set (FGTSWithdraw_VERSION_MINOR 0)

# Configure a header file to pass some of the CMake settings to the source code
configure_file (
	"${PROJECT_SOURCE_DIR}/FGTSWithdrawConfig.h.in"
	"${PROJECT_BINARY_DIR}/FGTSWithdrawConfig.h")

# Add the binary tree to the search path for include files so that we will find FGTSWithdrawConfig.h
include_directories ("${PROJECT_BINARY_DIR}")

add_executable (FGTSWithdraw main.cxx
	FGTSRangeCalc.cxx)

# Test Area
include (CTest)
#define a macro to simplify adding tests, the use it
macro (do_test arg result)
	add_test(FGTSWithdrawRange${arg} FGTSWithdraw ${arg})
	set_tests_properties (FGTSWithdrawRange${arg}
		PROPERTIES PASS_REGULAR_EXPRESSION ${result})
endmacro (do_test)

# does the application run
add_test (FGTSWithdrawRun FGTSWithdraw 100)
do_test(500.00 "range 1")
do_test(14000 "range 5")
do_test(1000.00 "range 2")
do_test(5000.00 "range 3")
do_test(10000.00 "range 4")
do_test(15000.00 "range 5")
do_test(20000.00 "range 6")
do_test(20000.01 "range 7")

## does it the first range
#add_test (FGTSWithdrawRange500 FGTSWithdraw 500.00)
#set_tests_properties (FGTSWithdrawRange500 PROPERTIES PASS_REGULAR_EXPRESSION "range 1")
