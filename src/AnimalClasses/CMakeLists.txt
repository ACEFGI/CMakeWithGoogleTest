project(AnimalClasses)

file(GLOB_RECURSE SourceFiles LIST_DIRECTORIES false *.h *.cpp)

add_library(${PROJECT_NAME} STATIC ${SourceFiles})

# Export include files
target_include_directories(${PROJECT_NAME} PUBLIC
    ${PROJECT_SOURCE_DIR}
)