#ifndef __VERSIS_MODEL_HPP__
#define __VERSIS_MODEL_HPP__

namespace Versis {
  class Model {
  public:
    virtual
    void OnCreate()   {}
    virtual
    void OnStep()     {}
    virtual
    void OnUpdate()   {}
    virtual
    void OnDestroy()  {}
  };
};

#endif //__VERSIS_MODEL_HPP__