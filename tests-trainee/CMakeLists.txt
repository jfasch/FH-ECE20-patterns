ADD_EXECUTABLE(
  design-patterns-c++-trainee-exercises-suite

  trainee-dummy-suite.cpp
  adapter-suite.cpp
  w1-sensor-suite.cpp
)

TARGET_LINK_LIBRARIES(
  design-patterns-c++-trainee-exercises-suite

  gtest_main
  design-patterns-trainee
  design-patterns-trainer
  Threads::Threads
)
