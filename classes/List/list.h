class list
{
    private:
        int list[5];
        int length;
    public:
        void setLength(int);
        int getLength();
        bool isFull();
        bool isEmpty();
        int search(int);
        void insert(int);
        void remove(int);
};
