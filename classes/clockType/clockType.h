class clockType
{
    private:
        int hrs;
        int min;
        int sec;
    public:
        void setTime(int, int, int);
        void getTime(int&, int&, int&);
        void incrementHrs();
        void incrementMin();
        void incrementSec();
        void displayTime();
        clockType(); //?
        clockType(int, int, int); //?
        bool isEqual(clockType& );
};