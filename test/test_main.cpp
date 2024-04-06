#include <unity.h>

void test_function_calculator_addition(void) {
    TEST_ASSERT_EQUAL(32, calculator_add(25, 7));
}

void setup() {
    UNITY_BEGIN();
    RUN_TEST(test_function_calculator_addition);
    UNITY_END();
}

void loop() {
    // この関数は空のままにします
}
