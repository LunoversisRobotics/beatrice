#ifndef __VERSIS_ROBOT_HPP__
#define __VERSIS_ROBOT_HPP__

#include "../common.hpp"
#include "../Entity/Entity.hpp"
#include "../Component/Component.hpp"

namespace Versis {
  class Robot : public Entity {
  private:
    typedef Entity super;
    struct {
      int              n_m;     // Number of motors
      Actuator::Motor *motors;  // Motor array
    };
  public:
    Robot(int n_m) : super()  {
      // Motor Setup
      this->n_m   = n_m;
      this->motors =
        (Actuator::Motor*)malloc(n_m * sizeof(Actuator::Motor));
      
      std::cout << "Created Robot" << std::endl;
    }
    ~Robot() {
      if(motors) {
        free(motors);
      }
    }
  };
};

#endif //__Versis_Robot_HPP__
