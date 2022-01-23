add_library(SuperPrinter super_printer.cpp)

# Include the target fils if they are required by the project
target_include_directories(SuperPrinter
    INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}
)

# generate install build
install(TARGETS SuperPrinter DESTINATION lib)
install(FILES super_printer.h DESTINATION include)
