#include "./Program.hpp"
namespace Versis {
  void Program::HandleSignals() {
    // Capture the errors
    char* output = catch_mach_err(&mach);
  
    // If not NULL, then print
    if(output != NULL) {
    std::cout << output << std::endl;
    }
  
    // Handle Signals
    switch(GetSignal()) {
    case SIGNAL_QUIT:
    this->running = false;
    mach.c_err = ERROR_FATAL("Quitting!");
    break;
    }
  }
  
  mach_t Program::GetMach() const {
    return this->mach;
  }
  
  u8_t Program::GetSignal() const {
    return this->signal;
  }
  
  bool Program::IsRunning() const {
    return this->running;
  }
}