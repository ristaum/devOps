set(LIBRARY_SOURCES
    main.cpp)
set(LIBRARY_INCLUDES 
    inc)

add_library(${LIBRARY_NAME} myLib.cpp)
add_subdirectory(${LIBRARY_INCLUDES})

if (ENABLE_WARNINGS)
    target_set_warnings(
        ${LIBRARY_NAME}
        ON
        OFF
    )
endif()

