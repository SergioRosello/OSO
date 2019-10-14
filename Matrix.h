class Matrix{

  public:

    int **matrix;
    Matrix(int row, int column);
    void initialize();
    void printMatrix();
    void clean();

  private:
    int row;
    int column;
};
