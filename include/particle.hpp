
enum class ParticleType{electron};

class Position{
public:
// constructor 
  Position() = default;
  Position(double x, double y, double z):
    x_(x),
    y_(y),
    z_(z)
    {}
  // destructor
  ~Position() = default;
  // copy
  Position(const Position& p) = default;
  // assignment
  Position& operator=(const Position&) = default;
  // move
  Position(Position&&) = default;
  // move assignment

  Position& operator=(Position&&) = default;

  Position get_position() {
    return Position(x_, y_, z_);
  }

  double get_x(){
    return x_;
  }
  double get_y(){
    return y_;
  }
  double get_z(){
    return z_;
  }

  void set_position(double x, double y, double z) {
    x_ = x;
    y_ = y;
    z_ = z;
  }

  void set_x(double x) {
    x_ = x;
  }
  void set_y(double y) {
    y_ = y;
  }  
  void set_z(double z) {
    z_ = z;
  }

private:
  double x_;
  double y_;
  double z_;

};


class Direction{
public:
// constructor 
  Direction() = default;
  Direction(double x, double y, double z):
    x_(x),
    y_(y),
    z_(z)
    {}
  // destructor
  ~Direction() = default;
  // copy
  Direction(const Direction& d) = default;
  // assignment
  Direction& operator=(const Direction&) = default;
  // move
  Direction(Direction&&) = default;
  // move assignment

  Direction& operator=(Direction&&) = default;

  Direction get_direction() {
    return Direction(x_, y_, z_);
  }

  double get_x(){
    return x_;
  }
  double get_y(){
    return y_;
  }
  double get_z(){
    return z_;
  }

  void set_direction(double x, double y, double z) {
    x_ = x;
    y_ = y;
    z_ = z;
  }

  void set_x(double x) {
    x_ = x;
  }
  void set_y(double y) {
    y_ = y;
  }  
  void set_z(double z) {
    z_ = z;
  }
    
  Direction operator-= (Direction& d) {
    x_ -= d.x_;
    y_ -= d.y_;
    z_ -= d.z_;  
    return *this;
  }

  Direction operator- (Direction& d) {
    return (*this -= d);
  }

  Direction operator+= (Direction& d) {
    x_ += d.x_;
    y_ += d.y_;
    z_ += d.z_;  
    return *this;
  }

  Direction operator+ (Direction& d) {
    return (*this += d);
  }

private:
  double x_;
  double y_;
  double z_;
};


class Particle{
public:
  Particle() = default;
  ~Particle() = default;
  Particle(const Particle&) = default;
  Particle& operator=(const Particle&) = default;
  Particle(Particle&&) = default;
  Particle& operator=(Particle&&) = default;

  void set_direction(double x, double y, double z) {
    direction_ = Direction(x, y, z);
  }

  void set_position(double x, double y, double z) {
    position_ = Position(x, y, z);
  }

  Direction get_direction() {
    return direction_;
  }

  Position get_position() {
    return position_;
  }
  
private:
  double energy_;
  double mass_;
  double momentum_;
  double time_;
  int charge_;
  ParticleType type_;
  Position position_;
  Direction direction_;
};



