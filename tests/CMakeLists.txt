if (BUILD_TESTING)
	add_executable(bubblesort_test bubblesort_test.cpp)
	target_link_libraries(bubblesort_test PRIVATE GTest::gtest_main bubblesort)

	add_executable(reversestr_test reversestr_test.cpp)
	target_link_libraries(reversestr_test PRIVATE GTest::gtest_main reversestr)

	add_executable(lulu_test lulu_test.cpp)
	target_link_libraries(lulu_test PRIVATE GTest::gtest_main lulu)

	add_executable(chap_funcs_test chap_funcs_test.cpp)
	target_link_libraries(chap_funcs_test PRIVATE GTest::gtest_main chap_funcs)

	include(GoogleTest)
	gtest_discover_tests(bubblesort_test)
	gtest_discover_tests(reversestr_test)
	gtest_discover_tests(lulu_test)
	gtest_discover_tests(chap_funcs_test)
endif()
