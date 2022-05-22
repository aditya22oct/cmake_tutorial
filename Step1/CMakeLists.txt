cmake_minimum_required(VERSION 3.10)

project(Tutorial1 VERSION 1.0)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

configure_file(TutorialConfig.h.in TutorialConfig.h)

add_executable(Tutorial_ tutorial.cxx)
add_executable(Argc argc_understand.cxx)

# In this the Tutorial_ is the name of the executable file
# and not a project name. 
target_include_directories(Tutorial_ PUBLIC
                           "${PROJECT_BINARY_DIR}"
                           )

# So this line is specific for each executable if not specified gives
# file not found error                           
target_include_directories(Argc PUBLIC
                           "${PROJECT_BINARY_DIR}"
                           )