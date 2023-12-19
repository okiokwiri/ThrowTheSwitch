#include "unity.h"
#include "Filter.h"


void test_fFilter_AddVal_should_HandleMidRangeCalculations(void)
{
    TEST_ASSERT_EQUAL_HEX16(0x3AD1,  Filter_AddVal(0x3AAB, 0x3B43));
    TEST_ASSERT_EQUAL_HEX16(0x1562,  Filter_AddVal(0x1122, 0x2222));
    TEST_ASSERT_EQUAL_HEX16(0x2B17,  Filter_AddVal(0x2222, 0x45F6));
}
void test_Filter_AddVal_shouldReturnPrevVal_IfPrevValandNewValMatch(void)
{
	TEST_ASSERT_EQUAL_HEX16(0x3AD1,  Filter_AddVal(0x3AD1,0x3AD1));
	TEST_ASSERT_EQUAL_HEX16(0x1562,  Filter_AddVal(0x1562,0x1562));
	TEST_ASSERT_EQUAL_HEX16(0x2B17,  Filter_AddVal(0x2B17,0x2B17));

}
void test_Filter_AddVal_should_HandleExtremeCalculations(void)
{
	TEST_ASSERT_EQUAL_HEX16(0xFFFE, Filter_AddVal(0xFFFF,0xFFFC));
	TEST_ASSERT_EQUAL_HEX16(0xFFFD, Filter_AddVal(0xFFFC,0xFFFF));
	TEST_ASSERT_EQUAL_HEX16(1, Filter_AddVal(0,4));
	TEST_ASSERT_EQUAL_HEX16(3, Filter_AddVal(4,0));
	TEST_ASSERT_EQUAL_HEX16(0x4000, Filter_AddVal(0,0xFFFF));
	TEST_ASSERT_EQUAL_HEX16(0xBFFF, Filter_AddVal(0xFFFF,0));
}


