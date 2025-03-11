#ifndef __VERSIS_COMPONENT_MOTOR_HPP__
#define __VERSIS_COMPONENT_MOTOR_HPP__

#include "../../common.hpp"

namespace Versis {
  namespace Actuator {
    typedef struct {
      angle_t ang;
      fixed_t spd;
    } Motor;
  }
}

#endif //__VERSIS_COMPONENT_MOTOR_HPP__