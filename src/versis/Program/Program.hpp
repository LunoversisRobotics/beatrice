#ifndef __VERSIS_PROGRAM_HPP__
#define __VERSIS_PROGRAM_HPP__

#include "../Common.hpp"
#include "../Model/Model.hpp"

#define SIGNAL_QUIT 0
#define SIGNAL_NONE 255

namespace Versis {
  class Program {
  private: 
    mach_t mach;
    u8_t   signal;
    bool   running;
  public:
    Program()   {    
      this->running = true;  
      this->signal  = true;  
      mach = create_mach(NULL, NULL);
    }

    void HandleSignals();

    u8_t    GetSignal() const;
    bool    IsRunning() const;
    mach_t  GetMach()   const;

    ~Program()  {
      shutdown_mach(&mach);
    }
  };

};

#endif //__VERSIS_PROGRAM_HPP__