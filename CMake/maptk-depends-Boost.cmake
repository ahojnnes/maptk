# Required Boost external dependency

if(WIN32)
  set(Boost_USE_STATIC_LIBS TRUE)
  set(Boost_WIN_MODULES chrono)
endif()

find_package(Boost 1.50 REQUIRED COMPONENTS system filesystem program_options timer ${Boost_WIN_MODULES})
add_definitions(-DBOOST_ALL_NO_LIB)
include_directories(SYSTEM ${Boost_INCLUDE_DIRS})
