class Board{

  public:
    int **board;
    Board(){}
    Board(int row, int column);
    ~Board();
    int initialize();
    void printBoard();

  private:
    int row;
    int column;
};
