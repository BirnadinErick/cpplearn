if (BUILD_TESTING)
	add_executable(bubblesort_test bubblesort_test.cpp)
	target_link_libraries(bubblesort_test PRIVATE GTest::gtest_main bubblesort)

	add_executable(reversestr_test reversestr_test.cpp)
	target_link_libraries(reversestr_test PRIVATE GTest::gtest_main reversestr)

	include(GoogleTest)
	gtest_discover_tests(bubblesort_test)
	gtest_discover_tests(reversestr_test)
endif()
