project(TestAnimalClasses)

file(GLOB SourceFiles *.h *.cpp)

add_executable(${PROJECT_NAME} ${SourceFiles})

target_link_libraries(${PROJECT_NAME} AnimalClasses libgtest libgtest_main pthread)

add_test(
    NAME ${PROJECT_NAME}
    COMMAND ${PROJECT_NAME}
)