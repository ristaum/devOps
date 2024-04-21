set(EXECUTABLE_SOURCES
    main.cpp)

add_executable(${EXECUTABLE_NAME} ${EXECUTABLE_SOURCES})

target_link_libraries(${EXECUTABLE_NAME}
    ${LIBRARY_NAME}
    nlohmann_json::nlohmann_json)

if (ENABLE_WARNINGS)
    target_set_warnings(
        ${EXECUTABLE_NAME}
        ON
        OFF
    )
endif()