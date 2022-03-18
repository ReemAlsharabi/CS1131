#include "list.h"
void list::setLength(int l)
{
  length = l;
}
int list::getLength()
{
  return length;
}
bool list::isFull()
{
    if (length == 1000)
        return true;
    else
        return false;
}
bool list::isEmpty()
{
    if (length == 0)
        return false;
    else
        return true;
}
int list::search(int elt)
{
    int pos = -1;
    for (int i=0; i<length-1; i++)
    {
        if (list[i]==elt)
        {
            pos = i;
            break;
        }
    }
    return pos;
}
void list::insert(int elt)
{
    list[length] = elt;
    length++;
}
void list::remove(int elt)
{
    int pos = search(elt);
    if (pos==-1)
        return;
    else
    {
        for (int i=0; i<length-1; i++)
        {
            list[i]=list[i+1];
        }
    }
}
