#include <iostream>
#include "./Versis/Versis.hpp"
#include "./Beatrice/Beatrice.hpp"

class MainProg :  public Versis::Program,
                  public Versis::Model {
public:
  MainProg() : super() {
    beatrice = new Beatrice::Beatrice();
  }

  void OnCreate() override {
    std::cout << "Beatrice V" << BEATRICE_VERSION_NUMBER << " - ";
    std::cout << "'" << BEATRICE_VERSION_NAME << "'";
    std::cout << " :: " << BEATRICE_COPYRIGHT << std::endl;

    beatrice->OnCreate();
  }

  void OnStep() override {
    HandleSignals();
    beatrice->OnStep();
    beatrice->OnUpdate();
  }

  void OnDestroy() override {
    beatrice->OnDestroy();
  }
  private:
    Beatrice::Beatrice *beatrice;
    typedef Versis::Program super;
};

int main() {  
  MainProg *mainProg = new MainProg;

  mainProg->OnCreate();

  while(mainProg->IsRunning()) {
    mainProg->OnStep();
  }

  mainProg->OnDestroy();
  return 0;
}
