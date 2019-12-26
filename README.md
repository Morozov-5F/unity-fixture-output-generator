# Unity Fixture Output tester
This project provides test output for [Unity Fixture](https://github.com/ThrowTheSwitch/Unity/tree/master/extras/fixture).

## Building
1. Create the build directory:
```
?> mkdir -p ./build
```
2. Generate the project with CMake
```
?> cmake -S . -B ./build
```
3. Build and run tests:
```
?> cmake --build ./build --target test -- ARGS=--output-on-failure
```

Sample output:
```
Running tests...
Test project /Users/morozov/git/unity-fixture-output-test/build
    Start 1: test_1
1/1 Test #1: test_1 ...........................***Failed    0.01 sec
Unity test run 1 of 1
.../Users/morozov/git/unity-fixture-output-test/main.c:24:TEST(first, third):FAIL: Test failed


-----------------------
3 Tests 1 Failures 0 Ignored
FAIL


0% tests passed, 1 tests failed out of 1

Total Test time (real) =   0.02 sec

The following tests FAILED:
          1 - test_1 (Failed)
Errors while running CTest
make: *** [test] Error 8
```