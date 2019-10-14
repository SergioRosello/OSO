class Matrix{

  public:

    int **matrix;
    Matrix(int row, int column);
    ~Matrix();
    int initialize();
    void printMatrix();

  private:
    int row;
    int column;
};
