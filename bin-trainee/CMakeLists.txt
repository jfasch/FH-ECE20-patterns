ADD_EXECUTABLE(onewire-temperature onewire-temperature.cpp)

ADD_EXECUTABLE(onewire-temperature-oo onewire-temperature-oo.cpp)
TARGET_LINK_LIBRARIES(
  onewire-temperature-oo 

  design-patterns-trainee
  design-patterns-trainer
  Threads::Threads
)
