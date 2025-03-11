#ifndef __BEATRICE_HPP__
#define __BEATRICE_HPP__
#include "../Versis/Versis.hpp"

#define LMOTOR 0
#define RMOTOR 1
#define MMOTOR 2

namespace Beatrice {
  class Beatrice :  public Versis::Robot,
                    public Versis::Model {
  private:
    typedef Versis::Robot super;
  public:
    Beatrice() : super(3) {}

    void OnCreate()   override {}
    void OnStep()     override {}
    void OnUpdate()   override {}
    void OnDestroy()  override {}
    
    ~Beatrice() {}
  };
};

#endif //__BEATRICE_HPP__