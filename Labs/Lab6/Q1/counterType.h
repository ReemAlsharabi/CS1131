/*
Define a class counterType to implement a counter.
Your class must have a private data member counter of type int and functions to set counter to the value specified by the user, initialize counter to 0,
retrieve the value of counter, and increment and decrement counter by one. The value of  counter must be nonnegative.
*/
class counterType
{
    private:
        int counter;
    public:
        counterType();
        void setcounter(int);
        int getcounter();
        int increasecounter(int);
        int decreasecounter(int);
};
