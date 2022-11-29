ADD_LIBRARY(
  design-patterns-trainee

  trainee-dummy.h
  trainee-dummy.cpp

  sensor-w1.h
  sensor-w1.cpp
)
TARGET_INCLUDE_DIRECTORIES(design-patterns-trainee PUBLIC .)
TARGET_LINK_LIBRARIES(design-patterns-trainee design-patterns-trainer)
