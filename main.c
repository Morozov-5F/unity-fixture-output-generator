#include <unity_fixture.h>

TEST_GROUP(first);
TEST_SETUP(first)
{

}

TEST_TEAR_DOWN(first)
{

}

TEST(first, first)
{
}

TEST(first, second)
{
}

TEST(first, third)
{
    TEST_FAIL_MESSAGE("Test failed");
}

TEST_GROUP_RUNNER(first)
{
    RUN_TEST_CASE(first, first);
    RUN_TEST_CASE(first, second);
    RUN_TEST_CASE(first, third);
}

void runAllTests(void)
{
    RUN_TEST_GROUP(first);
}

int main(int argc, const char *argv[])
{
    /* code */
    return UnityMain(argc, argv, runAllTests);
}
