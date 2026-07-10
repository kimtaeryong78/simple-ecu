add_executable(
    SimpleECU
    main.cpp
    ../src/logger.cpp
)

target_include_directories(SimpleECU PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/../include)