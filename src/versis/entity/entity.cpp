#include "./Entity.hpp"

namespace Versis {
  Entity::Entity() {
    // Create a body at 0, 0 @ 0deg
    this->body  = create_body(create_axis(0, 0), vec2f(I_TO_FX(20), I_TO_FX(20)));
    std::cout << "Created Entity!" << std::endl;
  }

  state_e Entity::GetState() const {
    return this->state;
  }

  error_t Entity::GetErr() const {
    return this->err;
  }

  body_t  Entity::GetBody() const {
    return this->body;
  }

  Entity::~Entity() {
  }
}