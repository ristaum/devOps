function(target_set_warnings TARGET ENABLED ENABLED_AS_ERRORS)

    if (NOT ${ENABLED})
        message(STATUS "Warnings Disabled for: ${TARGET}")
        return()
    endif()

    set(GCC_WARNINGS
        -Wall
        -Wextra
        -Wpedantic)

    if(${ENABLED_AS_ERRORS})
        set(GCC_WARNINGS ${GCC_WARNINGS} -Werror)
    endif()

    set(WARNINGS ${GCC_WARNINGS})

    target_compile_options(${TARGET} PRIVATE ${WARNINGS})
    message(STATUS ${WARNINGS})

endfunction(target_set_warnings)