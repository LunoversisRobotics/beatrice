#ifndef __VERSIS_Entity_HPP__
#define __VERSIS_Entity_HPP__

#include "../common.hpp"

namespace Versis {

  typedef enum {
    STATE_STILL,
    STATE_MOVING,
    STATE_BUSY,
  } state_e;

  class Entity {
  private:
    body_t   body;
    state_e  state;
    error_t  err;
  public:
    Entity();

    // Getters
    state_e GetState() const;
    error_t GetErr()   const;
    body_t  GetBody()  const;

    ~Entity();
  };
};

#endif //__VERSIS_Entity_HPP__
