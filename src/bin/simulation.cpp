#include <iostream>

#include <particle.hpp>

int main(){
  Particle part;
  part.set_direction(1., 1., 1.);
  part.set_position(0., 0., 0.);
  // need to define << operator first...
  //std::cout << "dir: " << part.get_direction() << ", pos: " << part.get_position() << std::endl;
}
