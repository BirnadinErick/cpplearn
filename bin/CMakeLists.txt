add_executable(bubblesort_exe bubblesort.cpp)
target_link_libraries(bubblesort_exe PRIVATE cxx_setup bubblesort)

add_executable(chap_funcs_exe chap_funcs.cpp)
target_link_libraries(chap_funcs_exe PRIVATE cxx_setup chap_funcs)

add_executable(multiplication_table_exe multiplication_table.cpp)
target_link_libraries(multiplication_table_exe PRIVATE cxx_setup chap_arr)
