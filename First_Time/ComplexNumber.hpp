namespace math
{
    class ComplexNumber
    {
    private:
        double real;
        double complex;
    public:
        ComplexNumber(double real, double complex);
        void print();
        void setReal(double real);
        void setComplex(double complex);
        // ~ComplexNumber();
    };
    class Numbers
    {
    private:
        int *nums;
    public:
        Numbers(/* args */);
        ~Numbers();
    };    
}