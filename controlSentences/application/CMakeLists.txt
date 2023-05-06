add_library(application SHARED comparacion.c comparacion.h)
target_include_directories(application PUBLIC ${CMAKE_CURRENT_LIST_DIR})
