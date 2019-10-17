struct Coordinates {
  int x;
  int y;

  // Struct Coordinates constructor
  // assigns x to x 
  // assigns y to y
  Coordinates(int x = -1, int y = -1)
    : x(x), y(y)
  {}

  // Operator = overload
  // assignment operator
  // https://stackoverflow.com/a/14047520/4264080
  Coordinates &operator = (const Coordinates &obj) {
    x = obj.x;
    y = obj.y;
    return *this;
  }

};

class Letter {
  public:
    // Default Constructor
    Letter();
    // Constructor takes three parameters, x, y and letter.
    Letter(Coordinates, char);

    Coordinates getCoordinates(){
      return coordinates;
    }

    char getLetter(){
      return letter;
    }

  private: 
    Coordinates coordinates;
    char letter;
};
