# if (ENABLE_TESTING)
    # include(Catch)
    # enable_testing()

    set(TESTS_MAIN unit_tests.out)
    set(TESTS_SOURCES
        main.cpp)

    add_executable(${TESTS_MAIN} ${TESTS_SOURCES})

    # target_link_libraries(${TESTS_MAIN} 
    #     ${LIBRARY_NAME}
    #     GTest::gtest_main)
    target_link_libraries(${TESTS_MAIN} 
        ${LIBRARY_NAME}
        Catch2::Catch2WithMain)

    # include(GoogleTest)
    # gtest_discover_tests(${TESTS_MAIN})
# endif()