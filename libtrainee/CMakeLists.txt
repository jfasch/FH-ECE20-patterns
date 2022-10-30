ADD_LIBRARY(
  design-patterns-trainee

  trainee-dummy.h
  trainee-dummy.cpp
)
TARGET_INCLUDE_DIRECTORIES(design-patterns-trainee PUBLIC .)
TARGET_LINK_LIBRARIES(design-patterns-trainee design-patterns-trainer)
